#!/usr/bin/env python3
"""Plan a path with /plan_path and fly it on PX4 SITL via MAVSDK.
   *** Canyon Gauntlet (v2) — arrival-gated waypoint streaming ***

   Route  : START (0, 0, 6)  →  GOAL (60, 0, 6)   [ENU, metres]
   Alt band: 4 – 10 m

   No-fly zones mirror spawn_world_v2.sh obstacle footprints,
   each padded by 2 m horizontally and 2 m vertically.

   Flow: rclpy -> /plan_path service -> shutdown -> asyncio -> MAVSDK
   arm -> seed OFFBOARD setpoints -> start OFFBOARD ->
   for each waypoint: command it, keep re-sending at HEARTBEAT_HZ
   (satisfies PX4's OFFBOARD watchdog), poll NED position telemetry,
   advance only when within ACCEPT_RADIUS_M -> land.

   This is robust at any command rate (including 0.7 Hz) because
   advancement is driven by arrival, not by a fixed sleep timer.

   ENU planner output is rotated to NED for PX4:
       north = y,  east = x,  down = −z

   Run inside the container:
       docker exec -it px4_sitl bash -lc '
         source /opt/ros/jazzy/setup.bash &&
         source /root/3d-path-planner/ros2_ws/install/setup.bash &&
         python3 /root/3d-path-planner/scripts/run_mission_v2.py'
"""

import asyncio
import sys

import rclpy
from geometry_msgs.msg import PointStamped
from nav_msgs.msg import Path
from rclpy.node import Node

from mavsdk import System
from mavsdk.offboard import OffboardError, PositionNedYaw

from planner_msgs.msg import NoFlyZone
from planner_msgs.srv import PlanPath

# ---------------------------------------------------------------------------
# Waypoint-arrival tuning
# ---------------------------------------------------------------------------
# PX4 drops out of OFFBOARD if it receives no setpoint for >500 ms.
# We re-send the current setpoint at this rate while waiting for arrival.
HEARTBEAT_HZ: float = 5.0          # Hz — must be > 2 Hz to satisfy watchdog

# Drone is considered "arrived" when 3-D distance to setpoint < this value.
ACCEPT_RADIUS_M: float = 1.2       # metres — tighten for precision, loosen for speed

# Hard timeout per waypoint: give up and advance if the drone hasn't arrived
# within this many seconds (catches stalls near obstacles).
WAYPOINT_TIMEOUT_S: float = 60.0   # seconds

# ---------------------------------------------------------------------------
# Mission parameters — Canyon Gauntlet v2
# ---------------------------------------------------------------------------
START   = (0.0,  0.0, 6.0)
GOAL    = (60.0, 0.0, 6.0)
ALT_MIN = 4.0
ALT_MAX = 10.0

# No-fly zones: (min_corner_ENU, max_corner_ENU), padded 2 m each side.
#
#  gate_east   — box centre (15, 0, 6), size 4×2×12  → extents x∈[13,17] y∈[-1,1]  z∈[0,12]
#  wing_n      — box centre (25, 9, 4.5), size 6×4×9  → extents x∈[22,28] y∈[7,11]  z∈[0,9]
#  wing_s      — box centre (25,-9, 4.5), size 6×4×9  → extents x∈[22,28] y∈[-11,-7] z∈[0,9]
#  diagonal_ne — box centre (38, 6, 3.5), size 5×5×7  → extents x∈[35.5,40.5] y∈[3.5,8.5] z∈[0,7]
#  low_tunnel  — box centre (50, 0, 1.5), size 8×14×3 → extents x∈[46,54] y∈[-7,7] z∈[0,3]
NO_FLY_ZONES = [
    # gate_east
    ((11.0,  -3.0, 0.0), (19.0,   3.0, 14.0)),
    # wing_n
    ((20.0,   5.0, 0.0), (30.0,  13.0, 11.0)),
    # wing_s
    ((20.0, -13.0, 0.0), (30.0,  -5.0, 11.0)),
    # diagonal_ne
    ((33.5,   1.5, 0.0), (42.5,  10.5,  9.0)),
    # low_tunnel
    ((44.0,  -9.0, 0.0), (56.0,   9.0,  5.0)),
]


def _make_zones() -> list[NoFlyZone]:
    out = []
    for (mn, mx) in NO_FLY_ZONES:
        z = NoFlyZone()
        z.min_corner.x, z.min_corner.y, z.min_corner.z = mn
        z.max_corner.x, z.max_corner.y, z.max_corner.z = mx
        out.append(z)
    return out


def request_plan() -> Path:
    rclpy.init()
    node = Node('mission_executor_planner_client')
    client = node.create_client(PlanPath, '/plan_path')
    while not client.wait_for_service(timeout_sec=2.0):
        node.get_logger().info('Waiting for /plan_path service...')

    req = PlanPath.Request()
    req.start = PointStamped()
    req.start.header.frame_id = 'map'
    req.start.point.x, req.start.point.y, req.start.point.z = START
    req.goal = PointStamped()
    req.goal.header.frame_id = 'map'
    req.goal.point.x, req.goal.point.y, req.goal.point.z = GOAL
    req.altitude_min = ALT_MIN
    req.altitude_max = ALT_MAX
    req.no_fly_zones = _make_zones()

    fut = client.call_async(req)
    rclpy.spin_until_future_complete(node, fut)
    response = fut.result()
    rclpy.shutdown()

    if not response.success:
        print(f'Plan failed: {response.message}', file=sys.stderr)
        sys.exit(1)

    print(f'Plan: {response.message}')
    return response.path


def path_to_ned_setpoints(path: Path) -> list[PositionNedYaw]:
    """ENU planner → NED PX4: north = y, east = x, down = −z. Yaw fixed to 0."""
    return [
        PositionNedYaw(
            p.pose.position.y,   # north
            p.pose.position.x,   # east
            -p.pose.position.z,  # down
            0.0,                 # yaw
        )
        for p in path.poses
    ]


def subsample(setpoints: list, target_count: int = 25) -> list:
    if len(setpoints) <= target_count:
        return setpoints
    step = len(setpoints) // target_count
    out = setpoints[::step]
    if out[-1] is not setpoints[-1]:
        out.append(setpoints[-1])
    return out


async def _current_ned(drone: System) -> tuple[float, float, float]:
    """Return the drone's current NED position as (north, east, down)."""
    async for pos in drone.telemetry.position_velocity_ned():
        return (
            pos.position.north_m,
            pos.position.east_m,
            pos.position.down_m,
        )


async def _wait_for_arrival(
    drone: System,
    sp: PositionNedYaw,
    *,
    accept_radius: float = ACCEPT_RADIUS_M,
    timeout: float = WAYPOINT_TIMEOUT_S,
    heartbeat_hz: float = HEARTBEAT_HZ,
) -> bool:
    """Re-send *sp* at *heartbeat_hz* until the drone is within *accept_radius*
    metres (3-D) of the setpoint, or *timeout* seconds have elapsed.

    Returns True on arrival, False on timeout (caller logs and advances).
    """
    interval = 1.0 / heartbeat_hz
    elapsed = 0.0
    while elapsed < timeout:
        await drone.offboard.set_position_ned(sp)
        north, east, down = await _current_ned(drone)
        dn = sp.north_m - north
        de = sp.east_m  - east
        dd = sp.down_m  - down
        dist = (dn**2 + de**2 + dd**2) ** 0.5
        if dist < accept_radius:
            return True
        await asyncio.sleep(interval)
        elapsed += interval
    return False


async def fly_path(setpoints: list[PositionNedYaw]) -> None:
    drone = System()
    print('Connecting to PX4 on udpin://0.0.0.0:14540 ...')
    await drone.connect(system_address='udpin://0.0.0.0:14540')
    async for state in drone.core.connection_state():
        if state.is_connected:
            break
    print('Connected.')

    print('Waiting for global position + home estimate ...')
    async for health in drone.telemetry.health():
        if health.is_global_position_ok and health.is_home_position_ok:
            break
    print('Position estimate OK.')

    print('Arming ...')
    await drone.action.arm()

    # Seed the first setpoint so PX4 accepts the OFFBOARD mode switch.
    first = setpoints[0]
    print(
        f'Seeding OFFBOARD setpoint  '
        f'N={first.north_m:.1f}  E={first.east_m:.1f}  D={first.down_m:.1f} ...'
    )
    for _ in range(20):
        await drone.offboard.set_position_ned(first)
        await asyncio.sleep(0.05)

    try:
        await drone.offboard.start()
    except OffboardError as e:
        print(f'OFFBOARD start failed: {e}', file=sys.stderr)
        await drone.action.disarm()
        sys.exit(1)
    print('OFFBOARD active.')

    # --- Fly each waypoint, advancing only on arrival ---
    total = len(setpoints)
    for i, sp in enumerate(setpoints):
        print(
            f'WP {i + 1:>3}/{total}  '
            f'N={sp.north_m:6.2f}  E={sp.east_m:6.2f}  D={sp.down_m:6.2f}  '
            f'— commanding ...',
            end='  ',
            flush=True,
        )
        arrived = await _wait_for_arrival(drone, sp)
        if arrived:
            print('arrived.')
        else:
            print(
                f'TIMEOUT after {WAYPOINT_TIMEOUT_S:.0f} s — advancing anyway.',
                file=sys.stderr,
            )

    print('Stopping OFFBOARD and landing ...')
    try:
        await drone.offboard.stop()
    except OffboardError:
        pass
    await drone.action.land()
    async for in_air in drone.telemetry.in_air():
        if not in_air:
            break
    print('Landed.')


def main() -> None:
    path = request_plan()
    print(f'Path has {len(path.poses)} waypoints (raw).')
    setpoints = subsample(path_to_ned_setpoints(path))
    print(f'Flying {len(setpoints)} subsampled setpoints.')
    asyncio.run(fly_path(setpoints))


if __name__ == '__main__':
    main()

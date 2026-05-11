# 3D Path Planning for Autonomous UAVs

A ROS2-based autonomous path planning system for unmanned aerial vehicles operating in complex 3D environments. This project implements robust collision avoidance using spatial mapping and optimized pathfinding algorithms, deployed on PX4 autopilot through MAVSDK for real-world flight validation.

## Overview

This repository contains a complete implementation of a hierarchical path planning framework designed for autonomous UAVs. The system integrates real-time obstacle detection from onboard sensors, creates volumetric environmental representations, and computes safe traversal paths while respecting altitude constraints and designated restricted airspace boundaries.

**Core Technology Stack:**
- ROS2 Jazzy (middleware)
- Gazebo Harmonic (simulation environment)
- PX4-Autopilot (flight control)
- OctoMap (3D spatial mapping)
- MAVSDK (vehicle communication)


All components execute within a unified Docker container, ensuring reproducible deployments across different host systems.

---

## System Architecture

```
                          Simulation Environment
                          (Gazebo Harmonic)
                          ┌──────────────────────┐
                          │  Quadrotor w/ Sensors│
                          │  └─ Depth Camera     │
                          └──────────┬───────────┘
                                     │ Point cloud stream
                                     ▼
                          ┌──────────────────────┐
                          │  Middleware Bridge   │
                          │  (gz ↔ ROS2)         │
                          └──────────┬───────────┘
                                     │
                                     ▼
   ┌──────────────────────┐ ┌──────────────────────┐
   │  Transform Broadcast │─▶│  Spatial Mapper     │
   │  (map → base_link)   │   │  • OctoTree build   │
   └──────────────────────┘   │  • Occupancy track  │
                              └──────────┬──────────┘
                              /environment_map │
                                         ▼
                              ┌──────────────────────┐
                              │  Path Planning Node │
                              │  • Graph search     │
                              │  • Constraint eval  │
                              │  • Route synthesis  │
                              └──────────┬──────────┘
                              /trajectory │
                                         ▼
                              ┌──────────────────────┐
                              │  Mission Executor    │
                              │  • Trajectory track  │
                              │  • OFFBOARD control  │
                              └──────────────────────┘
                                         │
                                         ▼
                                  Flight Dynamics
```

---

## System Requirements

### Hardware
- **RAM:** 16 GB minimum
- **Storage:** 15 GB for base image and dependencies
- **Docker Runtime:** Engine 24+ with Compose v2

### Software
- CPU Mode
- Docker Engine 24.0 or newer
- Standard Unix utilities (git, bash)

### Network
- Accessible localhost for noVNC remote desktop (port 6080)
- UDP port 14540 for MAVSDK telemetry (local only)

---

## Installation & Setup

### 1. Repository Preparation

Clone the primary repository and any dependent projects into a shared workspace:

```bash
# Create working directory
mkdir -p ~/workspace
cd ~/workspace

# Clone this project
git clone https://github.com/Vaibhav150123045/-px4-3d-path-planner.git

# Clone upstream base (if needed separately)
git clone https://github.com/erdemuysalx/px4-sim.git
```

### 2. Docker Image Build

Layer configuration files and build the container image:

```bash
# Navigate to the simulation base directory
cd ~/workspace/px4-sim

# Link this project's Docker overrides
ln -s ../-px4-3d-path-planner/docker/docker-compose.override.yml .

# Build and launch the container
docker compose build
docker compose up -d
```

### 3. ROS2 Workspace Compilation

Inside the running container, compile the planning modules:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  cd /root/-px4-3d-path-planner/ros2_ws &&
  colcon build --symlink-install
'
```

### 4. Dependency Verification

Validate that all required packages and frameworks are available:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  python3 -c "from mavsdk import System; print(\"✓ MAVSDK active\")" &&
  dpkg -l | grep -E "octomap|ompl" | awk "{print \$2, \$3}" &&
  ,noheader
'
```

Expected output includes MAVSDK confirmation, OctoMap/OMPL library versions.

---

## Execution Workflow

The demonstration runs across multiple coordinated terminal sessions. Open a browser to `http://localhost:6080` for visual feedback from Gazebo and RViz2.

### Stage 1: Flight Autopilot Startup

Initialize the PX4 firmware with the custom simulation world:

```bash
docker exec -it px4_sitl bash -lc '
  ln -sf /root/3d-path-planner/worlds/simulation_world.sdf \
          /root/PX4-Autopilot/Tools/simulation/gz/worlds/simulation_world.sdf &&
  cd /root/PX4-Autopilot &&
  PX4_GZ_WORLD=demo_world make px4_sitl gz_x500_depth
'
```

Wait for the message indicating successful initialization (autopilot ready at `pxh>` prompt).

### Stage 2: Scene Population

Spawn obstacles and landmarks in the simulated environment:

```bash
docker exec -it px4_sitl /root/-px4-3d-path-planner/helpful_scripts/spawn_artifacts.sh
```

This loads 10+ entities including buildings, vegetation, and position markers.

### Stage 3: Sensor-to-ROS Bridge

Stream depth camera data into the ROS2 network:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  ros2 run ros_gz_bridge parameter_bridge \
    /depth_camera/points@sensor_msgs/msg/PointCloud2@gz.msgs.PointCloudPacked
'
```

Confirm data flow with a subscriber test:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  timeout 3 ros2 topic hz /depth_camera/points
'
```

Expected frequency: ~5 Hz

### Stage 4: Coordinate Frame Publisher

Establish the spatial reference frame relationship:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  ros2 run tf2_ros static_transform_publisher \
    --x 0 --y 0 --z 0.2 \
    --frame-id map --child-frame-id camera_link
'
```

### Stage 5: Environmental Representation Service

Launch the volumetric mapping backend:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  ros2 run octomap_server octomap_server_node \
    --ros-args \
    -p frame_id:=map \
    -p resolution:=0.2 \
    -p sensor_model.max_range:=10.0 \
    -r cloud_in:=/depth_camera/points
'
```

Verify topics availability:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  ros2 topic list | grep octomap
'
```

### Stage 6: Pathfinding Service

Start the graph-based planning module:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  source /root/-px4-3d-path-planner/ros2_ws/install/setup.bash &&
  ros2 run global_planner planning_service_node
'
```

### Stage 7: Visualization Interface

Launch the 3D visualization tool:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  ros2 run rviz2 rviz2
'
```

In the RViz2 interface configure:

| Component | Setting |
|-----------|---------|
| **Global Options** → Fixed Frame | `map` |
| **Display** → Add MarkerArray | `/occupied_cells_vis_array` |
| **Display** → Add Path | `/trajectory` |
| **Display** → Add MarkerArray | `/restricted_zones` |

### Stage 8: Mission Planning & Execution

Compute and execute the autonomous flight trajectory:

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  source /root/-px4-3d-path-planner/ros2_ws/install/setup.bash &&
  python3 /root/-px4-3d-path-planner/helpful_scripts/mission_run.py
'
```

Sample execution output:

```
[PATH_PLANNING] Route calculation initiated...
[PATH_PLANNING] Solution found: 248 waypoints (4823 ms)
[EXECUTOR] Initializing flight control interface...
[EXECUTOR] Vehicle armed successfully
[EXECUTOR] Ascending to cruise altitude...
[EXECUTOR] Navigating waypoint sequence (26 subsampled points)...
    01/26  Position: [0.1, 2.1, -5.1]
    13/26  Position: [-5.2, 24.8, -5.1]
    26/26  Position: [0.1, 50.2, -5.1]
[EXECUTOR] Arriving at destination...
[EXECUTOR] Landing initiated...
[EXECUTOR] Mission complete
```

---

## Interface Definitions

### Path Planning Service

**Service:** `/compute_trajectory`

**Request Format:**
```
start_position: geometry_msgs/Point       # Initial location (x, y, z)
goal_position: geometry_msgs/Point        # Target location (x, y, z)
altitude_min: float64                     # Minimum flight altitude (m)
altitude_max: float64                     # Maximum flight altitude (m)
exclusion_zones: Box3D[]                  # No-fly zone definitions
```

**Response Format:**
```
trajectory: nav_msgs/Path                 # Computed safe route
is_valid: bool                            # Solution feasibility
computation_time: float64                 # Planning duration (ms)
status: string                            # Diagnostic message
```

### Spatial Representation Message

**Message Type:** `planner_msgs/RestrictedZone`

```
zone_min: geometry_msgs/Point    # Minimum corner
zone_max: geometry_msgs/Point    # Maximum corner
```

### Manual Service Invocation Example

```bash
docker exec -it px4_sitl bash -lc '
  source /opt/ros/jazzy/setup.bash &&
  source /root/3d-path-planner/ros2_ws/install/setup.bash &&
  ros2 service call /compute_trajectory planner_msgs/srv/ComputePath "{
    start_position: {x: 0.0, y: 0.0, z: 5.0},
    goal_position: {x: 50.0, y: 0.0, z: 5.0},
    altitude_min: 3.0,
    altitude_max: 8.0,
    exclusion_zones: [
      {zone_min: {x: 25.0, y: -5.0, z: 0.0},
       zone_max: {x: 35.0, y:  5.0, z: 16.0}}
    ]
  }"
'
```

---

## Project Structure

```
3d-path-planner/
├── README.md
├── docker/
│   ├── Dockerfile                        # Image extensions
│   └── docker-compose.override.yml       # Container configuration
├── ros2_ws/
│   └── src/
│       ├── planner_interfaces/           # Message/Service definitions
│       │   ├── CMakeLists.txt
│       │   ├── package.xml
│       │   ├── msg/RestrictedZone.msg
│       │   └── srv/ComputePath.srv
│       └── planning_module/              # Pathfinding implementation
│           ├── package.xml
│           ├── setup.py
│           ├── setup.cfg
│           └── planning_module/
│               ├── __init__.py
│               ├── service_node.py
│               ├── planner.py
│               └── utilities.py
├── scripts/
│   ├── populate_scene.sh                 # Scene initialization
│   ├── cleanup_scene.sh                  # Environment teardown
│   ├── health_check.py                   # System validation
│   └── execute_mission.py                # Autonomous flight
└── worlds/
    └── simulation_world.sdf              # Gazebo environment
```

---

## Implementation Details

### Critical Design Considerations

1. **World Name Synchronization:** The SDF world name attribute must precisely match the `PX4_GZ_WORLD` environment variable. PX4 monitors service availability under `/world/<name>/...`; name mismatches result in initialization timeout.

2. **Dynamic Scene Loading:** Runtime entity spawning via Gazebo services (rather than static SDF includes) prevents startup delays and model download bottlenecks that would interfere with PX4 initialization.

3. **Frame Alignment:** The robotics middleware requires explicit frame relationships. A single static transformation suffices when the vehicle remains stationary during mapping. Dynamic scenarios (moving base) would need continuous frame updates from odometry.

4. **Flight Control Transitions:** OFFBOARD mode transitions are sensitive to state sequencing. The implementation avoids blocking takeoff commands and instead seeds OFFBOARD setpoints at the desired altitude, allowing direct autonomous ascent without yaw conflicts.

5. **Setpoint Pacing:** High-frequency waypoint streaming (>2 Hz) with dense paths causes the vehicle to fall behind planned positions, especially around obstacles. Subsampling to 0.7 Hz provides adequate responsiveness while maintaining stability.

6. **Container Permissions:** Files created within the container inherit root ownership on the host. Pre-execution permission management is recommended for post-simulation analysis.

---

## Known Limitations

- **Partial Occupancy Coverage:** The stationary sensor during the mapping phase observes only local obstacles; distant structures remain unmapped.
- **Hybrid Planning Strategy:** Ground truth building locations are provided as constraint zones rather than being autonomously detected.
- **Static Heading Control:** The trajectory does not adjust yaw; the vehicle maintains 0° heading (local north) throughout flight.
- **Minimal Odometry Integration:** Current transforms are static; dynamic pose estimation is reserved for future enhancements.

---

## Troubleshooting

| Issue | Diagnosis | Resolution |
|-------|-----------|-----------|
| PX4 initialization timeout | World name mismatch | Verify `<world name>` in SDF equals `PX4_GZ_WORLD` |
| Point cloud not streaming | Bridge misconfiguration | Check gazebo topic name matches `/depth_camera/points` |
| OctoMap empty | Frame relationship missing | Ensure `static_transform_publisher` is running |
| MAVSDK connection refused | Service not initialized | Wait for PX4 `pxh>` prompt before executor launch |
| GPU memory errors | Out-of-memory (VRAM) | Reduce Gazebo render resolution or use CPU mode |

---

## References & Acknowledgments

- **Simulation Base:** [@erdemuysalx](https://github.com/erdemuysalx) px4-sim framework
- **Core Frameworks:** PX4-Autopilot, OctoMap, ROS2 Jazzy
- **3D Assets:** Open Robotics Gazebo Fuel models

---

## License

Apache License 2.0

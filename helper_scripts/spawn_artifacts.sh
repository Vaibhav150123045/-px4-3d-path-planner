#!/bin/bash
# Populate /world/planner_world with a NEW path-planning test scene (v2).
#
# Layout: "Canyon Gauntlet" — forces lateral + vertical avoidance.
#
#   Route: START (0,0,6) --> GOAL (60,0,6)   altitude band [4, 10] m
#
#   Obstacle map (ENU, box centres):
#     gate_east     — tall narrow wall at x=15, gap above z=10 (fly under or around)
#     wing_n        — medium north wing at x=25, y=+9
#     wing_s        — medium south wing at x=25, y=-9
#     diagonal_ne   — diagonal blocker at x=38, y=+6  (forces south dodge)
#     low_tunnel    — low wide slab at x=50, z=3 (fly over the top)
#
#   Trees + people for visual context.
#   Green sphere = start (0,0,6)  |  Red sphere = goal (60,0,6)
#
# Run inside the container AFTER the world is loaded:
#   bash /root/3d-path-planner/scripts/spawn_world_v2.sh

set -e

FUEL="https://fuel.gazebosim.org/1.0/OpenRobotics/models"

spawn_fuel() {
  local name=$1 pose=$2 uri=$3
  echo "Spawning ${name}..."
  gz service -s /world/planner_world/create \
    --reqtype gz.msgs.EntityFactory --reptype gz.msgs.Boolean --timeout 5000 \
    --req "sdf: '<?xml version=\"1.0\"?><sdf version=\"1.6\"><include><name>${name}</name><pose>${pose}</pose><uri>${uri}</uri></include></sdf>'"
}

# Box origin at its geometric centre; set z = Lz/2 to rest on ground.
spawn_box() {
  local name=$1 pose=$2 size=$3 r=$4 g=$5 b=$6
  echo "Spawning ${name}..."
  gz service -s /world/planner_world/create \
    --reqtype gz.msgs.EntityFactory --reptype gz.msgs.Boolean --timeout 5000 \
    --req "sdf: '<?xml version=\"1.0\"?><sdf version=\"1.6\"><model name=\"${name}\"><static>true</static><link name=\"link\"><collision name=\"col\"><geometry><box><size>${size}</size></box></geometry></collision><visual name=\"vis\"><geometry><box><size>${size}</size></box></geometry><material><ambient>${r} ${g} ${b} 1</ambient><diffuse>${r} ${g} ${b} 1</diffuse></material></visual></link><pose>${pose}</pose></model></sdf>'"
}

# Visual-only sphere — no collision, just a position marker.
spawn_marker() {
  local name=$1 pose=$2 radius=$3 r=$4 g=$5 b=$6
  echo "Spawning ${name}..."
  gz service -s /world/planner_world/create \
    --reqtype gz.msgs.EntityFactory --reptype gz.msgs.Boolean --timeout 5000 \
    --req "sdf: '<?xml version=\"1.0\"?><sdf version=\"1.6\"><model name=\"${name}\"><static>true</static><link name=\"link\"><visual name=\"vis\"><geometry><sphere><radius>${radius}</radius></sphere></geometry><material><ambient>${r} ${g} ${b} 1</ambient><diffuse>${r} ${g} ${b} 1</diffuse><emissive>${r} ${g} ${b} 1</emissive></material></visual></link><pose>${pose}</pose></model></sdf>'"
}

# ---------------------------------------------------------------------------
# Buildings
# ---------------------------------------------------------------------------
#
# gate_east: tall narrow wall (4 x 2 x 12 m) centred at (15, 0, 6).
#   Blocks the direct path corridor; drone must climb above z=12 or skirt ±2 m.
spawn_box "gate_east"   "15  0  6 0 0 0"  "4 2 12"  "0.80" "0.20" "0.20"

# wing_n: medium north wing (6 x 4 x 9 m) centred at (25, 9, 4.5).
#   Pushes the drone southward or high when navigating past x=25.
spawn_box "wing_n"      "25  9  4.5 0 0 0"  "6 4 9"   "0.20" "0.45" "0.80"

# wing_s: mirror south wing (6 x 4 x 9 m) centred at (25, -9, 4.5).
#   Combined with wing_n creates a pinch point; the gap is at y ∈ (-5, +5).
spawn_box "wing_s"      "25 -9  4.5 0 0 0"  "6 4 9"   "0.20" "0.45" "0.80"

# diagonal_ne: north-east blocker (5 x 5 x 7 m) centred at (38, 6, 3.5).
#   Forces the drone to dip south or climb above z=7 before the final stretch.
spawn_box "diagonal_ne" "38  6  3.5 0 0 0"  "5 5 7"   "0.85" "0.50" "0.10"

# low_tunnel: wide low slab (8 x 14 x 3 m) centred at (50, 0, 1.5).
#   Sits on the ground and spans the full lateral corridor; drone must fly over z=3.
spawn_box "low_tunnel"  "50  0  1.5 0 0 0"  "8 14 3"  "0.55" "0.25" "0.70"

# ---------------------------------------------------------------------------
# Trees (Fuel) — flanking the route for visual realism
# ---------------------------------------------------------------------------
spawn_fuel "tree_w1"  " 8  5 0 0 0 0"  "${FUEL}/Pine Tree"
spawn_fuel "tree_w2"  " 8 -5 0 0 0 0"  "${FUEL}/Oak tree"
spawn_fuel "tree_mid" "33  0 0 0 0 0"  "${FUEL}/Pine Tree"
spawn_fuel "tree_e1"  "55  7 0 0 0 0"  "${FUEL}/Oak tree"

# ---------------------------------------------------------------------------
# People (Fuel)
# ---------------------------------------------------------------------------
spawn_fuel "person_start" " 5  3 0 0 0  0.5"  "${FUEL}/Standing person"
spawn_fuel "person_goal"  "57 -3 0 0 0 -0.5"  "${FUEL}/Walking person"

# ---------------------------------------------------------------------------
# Start (green) and goal (red) markers at flight altitude
# ---------------------------------------------------------------------------
spawn_marker "start_marker" " 0 0 6 0 0 0"  "0.7" "0.10" "0.85" "0.10"
spawn_marker "goal_marker"  "60 0 6 0 0 0"  "0.7" "0.85" "0.10" "0.10"

echo
echo "Spawn complete — 15 entities in /world/planner_world."
echo "Start (green sphere): (0, 0, 6)  |  Goal (red sphere): (60, 0, 6)"
echo "Obstacle summary:"
echo "  gate_east   @ x=15  — 4×2×12 m wall, blocks direct path"
echo "  wing_n/s    @ x=25  — 6×4×9 m north+south pinch wings"
echo "  diagonal_ne @ x=38  — 5×5×7 m NE blocker, forces south or climb"
echo "  low_tunnel  @ x=50  — 8×14×3 m ground slab, drone must top-clear"
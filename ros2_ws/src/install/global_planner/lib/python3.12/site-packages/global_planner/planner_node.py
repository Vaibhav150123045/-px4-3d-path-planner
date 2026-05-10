#!/usr/bin/env python3
import math
import rclpy
from rclpy.node import Node

# Standard ROS 2 Messages
from geometry_msgs.msg import Point, PoseStamped
from nav_msgs.msg import Path

# Our Custom Messages!
from planner_msgs.srv import PlanPath
from planner_msgs.msg import NoFlyZoneArray


class GlobalPlannerNode(Node):
    def __init__(self):
        super().__init__('global_planner_node')

        # 1. State Variables
        self.active_nfzs = []

        # 2. Subscribers
        # Listen for dynamic No-Fly Zones being published by other nodes/UI
        self.nfz_sub = self.create_subscription(
            NoFlyZoneArray,
            '/planning/no_fly_zones',
            self.nfz_callback,
            10
        )

        # 3. Publishers
        # Publish the final path so RViz2 can draw it
        self.path_pub = self.create_publisher(Path, '/planning/visualized_path', 10)

        # 4. Services
        # Host the service that computes the path when requested
        self.srv = self.create_service(
            PlanPath, 
            '/planning/get_3d_path', 
            self.plan_path_callback
        )

        self.get_logger().info("3D Global Planner Node is ready and waiting for requests.")

    def nfz_callback(self, msg: NoFlyZoneArray):
        """Update our internal list of No-Fly Zones."""
        self.active_nfzs = msg.zones
        self.get_logger().info(f"Received {len(self.active_nfzs)} No-Fly Zones.")

    def is_point_in_nfz(self, x, y, z):
        """Helper to check if a specific 3D coordinate violates a No-Fly Zone."""
        for zone in self.active_nfzs:
            # Check altitude constraints of the cylinder
            if z < zone.min_altitude or z > zone.max_altitude:
                continue
            
            # Check 2D distance to the center of the cylinder
            dist = math.hypot(x - zone.center.x, y - zone.center.y)
            if dist <= zone.radius:
                return True
        return False

    def plan_path_callback(self, request, response):
        """
        This is triggered whenever another node asks for a path.
        request: Contains start, goal, min_altitude, max_altitude
        response: Must return success, path, path_length, message
        """
        self.get_logger().info(f"Path requested from ({request.start.x:.1f}, {request.start.y:.1f}, {request.start.z:.1f}) "
                               f"to ({request.goal.x:.1f}, {request.goal.y:.1f}, {request.goal.z:.1f})")

        # Create the standard ROS 2 Path message
        ros_path = Path()
        ros_path.header.stamp = self.get_clock().now().to_msg()
        ros_path.header.frame_id = "map" # Essential for RViz

        # =====================================================================
        # TODO: IMPLEMENT YOUR A* OR RRT HERE!
        # For now, we will just generate a straight line and check for collisions.
        # =====================================================================
        
        # Simple straight-line interpolation (Dummy Algorithm)
        steps = 10
        dx = (request.goal.x - request.start.x) / steps
        dy = (request.goal.y - request.start.y) / steps
        dz = (request.goal.z - request.start.z) / steps

        total_distance = 0.0

        for i in range(steps + 1):
            px = request.start.x + (dx * i)
            py = request.start.y + (dy * i)
            pz = request.start.z + (dz * i)

            # Enforce the overall mission altitude constraints
            if pz < request.min_altitude or pz > request.max_altitude:
                response.success = False
                response.message = f"Path violates mission altitude constraints at step {i}."
                return response

            # Check against dynamic No-Fly Zones
            if self.is_point_in_nfz(px, py, pz):
                response.success = False
                response.message = f"Path intersects No-Fly Zone at ({px:.1f}, {py:.1f}, {pz:.1f})."
                return response

            # Add valid point to path
            pose = PoseStamped()
            pose.header = ros_path.header
            pose.pose.position.x = px
            pose.pose.position.y = py
            pose.pose.position.z = pz
            ros_path.poses.append(pose)

        # Calculate rough total distance
        total_distance = math.sqrt(
            (request.goal.x - request.start.x)**2 +
            (request.goal.y - request.start.y)**2 +
            (request.goal.z - request.start.z)**2
        )

        # Publish for RViz
        self.path_pub.publish(ros_path)

        # Populate Response
        response.success = True
        response.path = ros_path
        response.path_length = total_distance
        response.message = "Straight-line path generated successfully."

        self.get_logger().info("Path calculation complete.")
        return response


def main(args=None):
    rclpy.init(args=args)
    node = GlobalPlannerNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/root/-px4-3d-path-planner/ros2_ws/install/global_planner'

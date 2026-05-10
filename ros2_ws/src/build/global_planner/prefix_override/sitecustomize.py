import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/seg/lecture7/-px4-3d-path-planner/ros2_ws/src/install/global_planner'

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planner_msgs:srv/PlanPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/srv/plan_path.h"


#ifndef PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__STRUCT_H_
#define PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/PlanPath in the package planner_msgs.
typedef struct planner_msgs__srv__PlanPath_Request
{
  /// Starting 3D coordinate
  geometry_msgs__msg__Point start;
  /// Target 3D coordinate
  geometry_msgs__msg__Point goal;
  /// UAV floor constraint for this specific mission
  double min_altitude;
  /// UAV ceiling constraint for this specific mission
  double max_altitude;
} planner_msgs__srv__PlanPath_Request;

// Struct for a sequence of planner_msgs__srv__PlanPath_Request.
typedef struct planner_msgs__srv__PlanPath_Request__Sequence
{
  planner_msgs__srv__PlanPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planner_msgs__srv__PlanPath_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlanPath in the package planner_msgs.
typedef struct planner_msgs__srv__PlanPath_Response
{
  /// True if a path was found, False if impossible
  bool success;
  /// The resulting sequence of 3D waypoints
  nav_msgs__msg__Path path;
  /// Total distance of the calculated path
  double path_length;
  /// Debug message (e.g., "Goal inside No-Fly Zone")
  rosidl_runtime_c__String message;
} planner_msgs__srv__PlanPath_Response;

// Struct for a sequence of planner_msgs__srv__PlanPath_Response.
typedef struct planner_msgs__srv__PlanPath_Response__Sequence
{
  planner_msgs__srv__PlanPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planner_msgs__srv__PlanPath_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  planner_msgs__srv__PlanPath_Event__request__MAX_SIZE = 1
};
// response
enum
{
  planner_msgs__srv__PlanPath_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PlanPath in the package planner_msgs.
typedef struct planner_msgs__srv__PlanPath_Event
{
  service_msgs__msg__ServiceEventInfo info;
  planner_msgs__srv__PlanPath_Request__Sequence request;
  planner_msgs__srv__PlanPath_Response__Sequence response;
} planner_msgs__srv__PlanPath_Event;

// Struct for a sequence of planner_msgs__srv__PlanPath_Event.
typedef struct planner_msgs__srv__PlanPath_Event__Sequence
{
  planner_msgs__srv__PlanPath_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planner_msgs__srv__PlanPath_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__STRUCT_H_

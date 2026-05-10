// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/msg/no_fly_zone.h"


#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__STRUCT_H_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'center'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/NoFlyZone in the package planner_msgs.
/**
  * Defines a cylindrical no-fly zone in 3D space
 */
typedef struct planner_msgs__msg__NoFlyZone
{
  /// Unique identifier for the zone
  rosidl_runtime_c__String id;
  /// X, Y center of the no-fly zone
  geometry_msgs__msg__Point center;
  /// Radius of the no-fly zone in meters
  double radius;
  /// Minimum altitude of the zone (usually 0)
  double min_altitude;
  /// Maximum altitude of the zone
  double max_altitude;
} planner_msgs__msg__NoFlyZone;

// Struct for a sequence of planner_msgs__msg__NoFlyZone.
typedef struct planner_msgs__msg__NoFlyZone__Sequence
{
  planner_msgs__msg__NoFlyZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planner_msgs__msg__NoFlyZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__STRUCT_H_

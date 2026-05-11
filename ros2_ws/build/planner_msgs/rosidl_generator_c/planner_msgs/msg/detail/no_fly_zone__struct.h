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
// Member 'min_corner'
// Member 'max_corner'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/NoFlyZone in the package planner_msgs.
/**
  * Axis-aligned no-fly zone in the world frame. min_corner.x <= max_corner.x etc.
 */
typedef struct planner_msgs__msg__NoFlyZone
{
  geometry_msgs__msg__Point min_corner;
  geometry_msgs__msg__Point max_corner;
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

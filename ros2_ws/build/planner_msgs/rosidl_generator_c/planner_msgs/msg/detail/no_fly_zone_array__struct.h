// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from planner_msgs:msg/NoFlyZoneArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/msg/no_fly_zone_array.h"


#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__STRUCT_H_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'zones'
#include "planner_msgs/msg/detail/no_fly_zone__struct.h"

/// Struct defined in msg/NoFlyZoneArray in the package planner_msgs.
/**
  * An array of no-fly zones to be published to the planner
 */
typedef struct planner_msgs__msg__NoFlyZoneArray
{
  std_msgs__msg__Header header;
  planner_msgs__msg__NoFlyZone__Sequence zones;
} planner_msgs__msg__NoFlyZoneArray;

// Struct for a sequence of planner_msgs__msg__NoFlyZoneArray.
typedef struct planner_msgs__msg__NoFlyZoneArray__Sequence
{
  planner_msgs__msg__NoFlyZoneArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} planner_msgs__msg__NoFlyZoneArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__STRUCT_H_

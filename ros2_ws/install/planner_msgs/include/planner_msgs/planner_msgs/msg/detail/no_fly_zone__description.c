// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice

#include "planner_msgs/msg/detail/no_fly_zone__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_planner_msgs
const rosidl_type_hash_t *
planner_msgs__msg__NoFlyZone__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xf0, 0xf4, 0x1f, 0xc9, 0xb3, 0xcd, 0x84,
      0xe1, 0x4c, 0xd1, 0xc5, 0x7c, 0x65, 0xd7, 0x78,
      0x18, 0x4d, 0x65, 0x3e, 0xc8, 0x24, 0x12, 0xf9,
      0x39, 0x93, 0x0f, 0x29, 0xe2, 0xaf, 0x10, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char planner_msgs__msg__NoFlyZone__TYPE_NAME[] = "planner_msgs/msg/NoFlyZone";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char planner_msgs__msg__NoFlyZone__FIELD_NAME__min_corner[] = "min_corner";
static char planner_msgs__msg__NoFlyZone__FIELD_NAME__max_corner[] = "max_corner";

static rosidl_runtime_c__type_description__Field planner_msgs__msg__NoFlyZone__FIELDS[] = {
  {
    {planner_msgs__msg__NoFlyZone__FIELD_NAME__min_corner, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {planner_msgs__msg__NoFlyZone__FIELD_NAME__max_corner, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription planner_msgs__msg__NoFlyZone__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
planner_msgs__msg__NoFlyZone__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {planner_msgs__msg__NoFlyZone__TYPE_NAME, 26, 26},
      {planner_msgs__msg__NoFlyZone__FIELDS, 2, 2},
    },
    {planner_msgs__msg__NoFlyZone__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Axis-aligned no-fly zone in the world frame. min_corner.x <= max_corner.x etc.\n"
  "geometry_msgs/Point min_corner\n"
  "geometry_msgs/Point max_corner";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
planner_msgs__msg__NoFlyZone__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {planner_msgs__msg__NoFlyZone__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 143, 143},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
planner_msgs__msg__NoFlyZone__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *planner_msgs__msg__NoFlyZone__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

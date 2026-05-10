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
      0xc8, 0xd4, 0x8f, 0x6e, 0xbf, 0xd3, 0xdc, 0xf8,
      0xf1, 0x76, 0xf5, 0x79, 0x88, 0x3b, 0xdd, 0xd1,
      0x2f, 0xa5, 0x93, 0x59, 0x81, 0x89, 0x76, 0x2b,
      0x0f, 0xb6, 0x97, 0xa2, 0x19, 0x44, 0x60, 0x4b,
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
static char planner_msgs__msg__NoFlyZone__FIELD_NAME__id[] = "id";
static char planner_msgs__msg__NoFlyZone__FIELD_NAME__center[] = "center";
static char planner_msgs__msg__NoFlyZone__FIELD_NAME__radius[] = "radius";
static char planner_msgs__msg__NoFlyZone__FIELD_NAME__min_altitude[] = "min_altitude";
static char planner_msgs__msg__NoFlyZone__FIELD_NAME__max_altitude[] = "max_altitude";

static rosidl_runtime_c__type_description__Field planner_msgs__msg__NoFlyZone__FIELDS[] = {
  {
    {planner_msgs__msg__NoFlyZone__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {planner_msgs__msg__NoFlyZone__FIELD_NAME__center, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {planner_msgs__msg__NoFlyZone__FIELD_NAME__radius, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {planner_msgs__msg__NoFlyZone__FIELD_NAME__min_altitude, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {planner_msgs__msg__NoFlyZone__FIELD_NAME__max_altitude, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
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
      {planner_msgs__msg__NoFlyZone__FIELDS, 5, 5},
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
  "# Defines a cylindrical no-fly zone in 3D space\n"
  "string id                 # Unique identifier for the zone\n"
  "geometry_msgs/Point center # X, Y center of the no-fly zone\n"
  "float64 radius            # Radius of the no-fly zone in meters\n"
  "float64 min_altitude      # Minimum altitude of the zone (usually 0)\n"
  "float64 max_altitude      # Maximum altitude of the zone";

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
    {toplevel_type_raw_source, 357, 357},
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

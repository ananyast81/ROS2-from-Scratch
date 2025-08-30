// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/TurtlePublisher.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/turtle_publisher__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__TurtlePublisher__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2e, 0xdf, 0xd3, 0xdd, 0x53, 0x26, 0x65, 0xb5,
      0xf2, 0x2d, 0xbd, 0x21, 0x69, 0x9e, 0x8f, 0x8c,
      0x2a, 0xd5, 0x49, 0x10, 0x28, 0xf4, 0xc3, 0x35,
      0x02, 0xd1, 0xcc, 0x69, 0x81, 0x76, 0xe3, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__TurtlePublisher__TYPE_NAME[] = "my_robot_interfaces/msg/TurtlePublisher";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__TurtlePublisher__FIELD_NAME__lin_vel_x[] = "lin_vel_x";
static char my_robot_interfaces__msg__TurtlePublisher__FIELD_NAME__ang_vel_z[] = "ang_vel_z";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__TurtlePublisher__FIELDS[] = {
  {
    {my_robot_interfaces__msg__TurtlePublisher__FIELD_NAME__lin_vel_x, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__TurtlePublisher__FIELD_NAME__ang_vel_z, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__TurtlePublisher__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__TurtlePublisher__TYPE_NAME, 39, 39},
      {my_robot_interfaces__msg__TurtlePublisher__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 lin_vel_x\n"
  "float32 ang_vel_z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__TurtlePublisher__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__TurtlePublisher__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__TurtlePublisher__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__TurtlePublisher__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

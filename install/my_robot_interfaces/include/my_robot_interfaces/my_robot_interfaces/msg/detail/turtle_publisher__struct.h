// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_interfaces:msg/TurtlePublisher.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/turtle_publisher.h"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__STRUCT_H_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/TurtlePublisher in the package my_robot_interfaces.
typedef struct my_robot_interfaces__msg__TurtlePublisher
{
  float lin_vel_x;
  float ang_vel_z;
} my_robot_interfaces__msg__TurtlePublisher;

// Struct for a sequence of my_robot_interfaces__msg__TurtlePublisher.
typedef struct my_robot_interfaces__msg__TurtlePublisher__Sequence
{
  my_robot_interfaces__msg__TurtlePublisher * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_interfaces__msg__TurtlePublisher__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__STRUCT_H_

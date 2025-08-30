// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/TurtlePublisher.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "my_robot_interfaces/msg/detail/turtle_publisher__functions.h"
#include "my_robot_interfaces/msg/detail/turtle_publisher__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace my_robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TurtlePublisher_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) my_robot_interfaces::msg::TurtlePublisher(_init);
}

void TurtlePublisher_fini_function(void * message_memory)
{
  auto typed_message = static_cast<my_robot_interfaces::msg::TurtlePublisher *>(message_memory);
  typed_message->~TurtlePublisher();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TurtlePublisher_message_member_array[2] = {
  {
    "lin_vel_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::TurtlePublisher, lin_vel_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ang_vel_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(my_robot_interfaces::msg::TurtlePublisher, ang_vel_z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TurtlePublisher_message_members = {
  "my_robot_interfaces::msg",  // message namespace
  "TurtlePublisher",  // message name
  2,  // number of fields
  sizeof(my_robot_interfaces::msg::TurtlePublisher),
  false,  // has_any_key_member_
  TurtlePublisher_message_member_array,  // message members
  TurtlePublisher_init_function,  // function to initialize message memory (memory has to be allocated)
  TurtlePublisher_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TurtlePublisher_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TurtlePublisher_message_members,
  get_message_typesupport_handle_function,
  &my_robot_interfaces__msg__TurtlePublisher__get_type_hash,
  &my_robot_interfaces__msg__TurtlePublisher__get_type_description,
  &my_robot_interfaces__msg__TurtlePublisher__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace my_robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<my_robot_interfaces::msg::TurtlePublisher>()
{
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::TurtlePublisher_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, my_robot_interfaces, msg, TurtlePublisher)() {
  return &::my_robot_interfaces::msg::rosidl_typesupport_introspection_cpp::TurtlePublisher_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

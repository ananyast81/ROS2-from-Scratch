// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:msg/TurtlePublisher.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/turtle_publisher.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/msg/detail/turtle_publisher__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TurtlePublisher & msg,
  std::ostream & out)
{
  out << "{";
  // member: lin_vel_x
  {
    out << "lin_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.lin_vel_x, out);
    out << ", ";
  }

  // member: ang_vel_z
  {
    out << "ang_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TurtlePublisher & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lin_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lin_vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.lin_vel_x, out);
    out << "\n";
  }

  // member: ang_vel_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ang_vel_z: ";
    rosidl_generator_traits::value_to_yaml(msg.ang_vel_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TurtlePublisher & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::msg::TurtlePublisher & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::msg::TurtlePublisher & msg)
{
  return my_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::msg::TurtlePublisher>()
{
  return "my_robot_interfaces::msg::TurtlePublisher";
}

template<>
inline const char * name<my_robot_interfaces::msg::TurtlePublisher>()
{
  return "my_robot_interfaces/msg/TurtlePublisher";
}

template<>
struct has_fixed_size<my_robot_interfaces::msg::TurtlePublisher>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_robot_interfaces::msg::TurtlePublisher>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_robot_interfaces::msg::TurtlePublisher>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:msg/TurtlePublisher.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/turtle_publisher.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/msg/detail/turtle_publisher__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtlePublisher_ang_vel_z
{
public:
  explicit Init_TurtlePublisher_ang_vel_z(::my_robot_interfaces::msg::TurtlePublisher & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::msg::TurtlePublisher ang_vel_z(::my_robot_interfaces::msg::TurtlePublisher::_ang_vel_z_type arg)
  {
    msg_.ang_vel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::msg::TurtlePublisher msg_;
};

class Init_TurtlePublisher_lin_vel_x
{
public:
  Init_TurtlePublisher_lin_vel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtlePublisher_ang_vel_z lin_vel_x(::my_robot_interfaces::msg::TurtlePublisher::_lin_vel_x_type arg)
  {
    msg_.lin_vel_x = std::move(arg);
    return Init_TurtlePublisher_ang_vel_z(msg_);
  }

private:
  ::my_robot_interfaces::msg::TurtlePublisher msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::msg::TurtlePublisher>()
{
  return my_robot_interfaces::msg::builder::Init_TurtlePublisher_lin_vel_x();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__BUILDER_HPP_

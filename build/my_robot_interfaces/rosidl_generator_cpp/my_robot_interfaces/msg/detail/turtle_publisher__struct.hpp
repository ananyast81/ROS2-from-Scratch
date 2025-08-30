// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:msg/TurtlePublisher.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/turtle_publisher.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__msg__TurtlePublisher __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__msg__TurtlePublisher __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TurtlePublisher_
{
  using Type = TurtlePublisher_<ContainerAllocator>;

  explicit TurtlePublisher_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lin_vel_x = 0.0f;
      this->ang_vel_z = 0.0f;
    }
  }

  explicit TurtlePublisher_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lin_vel_x = 0.0f;
      this->ang_vel_z = 0.0f;
    }
  }

  // field types and members
  using _lin_vel_x_type =
    float;
  _lin_vel_x_type lin_vel_x;
  using _ang_vel_z_type =
    float;
  _ang_vel_z_type ang_vel_z;

  // setters for named parameter idiom
  Type & set__lin_vel_x(
    const float & _arg)
  {
    this->lin_vel_x = _arg;
    return *this;
  }
  Type & set__ang_vel_z(
    const float & _arg)
  {
    this->ang_vel_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__msg__TurtlePublisher
    std::shared_ptr<my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__msg__TurtlePublisher
    std::shared_ptr<my_robot_interfaces::msg::TurtlePublisher_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtlePublisher_ & other) const
  {
    if (this->lin_vel_x != other.lin_vel_x) {
      return false;
    }
    if (this->ang_vel_z != other.ang_vel_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtlePublisher_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtlePublisher_

// alias to use template instance with default allocator
using TurtlePublisher =
  my_robot_interfaces::msg::TurtlePublisher_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__TURTLE_PUBLISHER__STRUCT_HPP_

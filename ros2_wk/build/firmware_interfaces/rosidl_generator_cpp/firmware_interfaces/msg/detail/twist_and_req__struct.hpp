// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from firmware_interfaces:msg/TwistAndReq.idl
// generated code does not contain a copyright notice

#ifndef FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__STRUCT_HPP_
#define FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__firmware_interfaces__msg__TwistAndReq __attribute__((deprecated))
#else
# define DEPRECATED__firmware_interfaces__msg__TwistAndReq __declspec(deprecated)
#endif

namespace firmware_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TwistAndReq_
{
  using Type = TwistAndReq_<ContainerAllocator>;

  explicit TwistAndReq_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identifier = "";
      this->deassertion = false;
    }
  }

  explicit TwistAndReq_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : identifier(_alloc),
    twist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identifier = "";
      this->deassertion = false;
    }
  }

  // field types and members
  using _identifier_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _identifier_type identifier;
  using _deassertion_type =
    bool;
  _deassertion_type deassertion;
  using _twist_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__identifier(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->identifier = _arg;
    return *this;
  }
  Type & set__deassertion(
    const bool & _arg)
  {
    this->deassertion = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    firmware_interfaces::msg::TwistAndReq_<ContainerAllocator> *;
  using ConstRawPtr =
    const firmware_interfaces::msg::TwistAndReq_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<firmware_interfaces::msg::TwistAndReq_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<firmware_interfaces::msg::TwistAndReq_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      firmware_interfaces::msg::TwistAndReq_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<firmware_interfaces::msg::TwistAndReq_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      firmware_interfaces::msg::TwistAndReq_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<firmware_interfaces::msg::TwistAndReq_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<firmware_interfaces::msg::TwistAndReq_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<firmware_interfaces::msg::TwistAndReq_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__firmware_interfaces__msg__TwistAndReq
    std::shared_ptr<firmware_interfaces::msg::TwistAndReq_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__firmware_interfaces__msg__TwistAndReq
    std::shared_ptr<firmware_interfaces::msg::TwistAndReq_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TwistAndReq_ & other) const
  {
    if (this->identifier != other.identifier) {
      return false;
    }
    if (this->deassertion != other.deassertion) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const TwistAndReq_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TwistAndReq_

// alias to use template instance with default allocator
using TwistAndReq =
  firmware_interfaces::msg::TwistAndReq_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace firmware_interfaces

#endif  // FIRMWARE_INTERFACES__MSG__DETAIL__TWIST_AND_REQ__STRUCT_HPP_

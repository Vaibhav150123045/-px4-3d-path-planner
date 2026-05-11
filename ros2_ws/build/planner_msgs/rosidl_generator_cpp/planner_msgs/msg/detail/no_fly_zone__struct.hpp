// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/msg/no_fly_zone.hpp"


#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__STRUCT_HPP_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'min_corner'
// Member 'max_corner'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planner_msgs__msg__NoFlyZone __attribute__((deprecated))
#else
# define DEPRECATED__planner_msgs__msg__NoFlyZone __declspec(deprecated)
#endif

namespace planner_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NoFlyZone_
{
  using Type = NoFlyZone_<ContainerAllocator>;

  explicit NoFlyZone_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_corner(_init),
    max_corner(_init)
  {
    (void)_init;
  }

  explicit NoFlyZone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_corner(_alloc, _init),
    max_corner(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _min_corner_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _min_corner_type min_corner;
  using _max_corner_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _max_corner_type max_corner;

  // setters for named parameter idiom
  Type & set__min_corner(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->min_corner = _arg;
    return *this;
  }
  Type & set__max_corner(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->max_corner = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planner_msgs::msg::NoFlyZone_<ContainerAllocator> *;
  using ConstRawPtr =
    const planner_msgs::msg::NoFlyZone_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planner_msgs::msg::NoFlyZone_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planner_msgs::msg::NoFlyZone_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planner_msgs::msg::NoFlyZone_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::msg::NoFlyZone_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planner_msgs::msg::NoFlyZone_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::msg::NoFlyZone_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planner_msgs::msg::NoFlyZone_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planner_msgs::msg::NoFlyZone_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planner_msgs__msg__NoFlyZone
    std::shared_ptr<planner_msgs::msg::NoFlyZone_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planner_msgs__msg__NoFlyZone
    std::shared_ptr<planner_msgs::msg::NoFlyZone_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NoFlyZone_ & other) const
  {
    if (this->min_corner != other.min_corner) {
      return false;
    }
    if (this->max_corner != other.max_corner) {
      return false;
    }
    return true;
  }
  bool operator!=(const NoFlyZone_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NoFlyZone_

// alias to use template instance with default allocator
using NoFlyZone =
  planner_msgs::msg::NoFlyZone_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planner_msgs

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__STRUCT_HPP_

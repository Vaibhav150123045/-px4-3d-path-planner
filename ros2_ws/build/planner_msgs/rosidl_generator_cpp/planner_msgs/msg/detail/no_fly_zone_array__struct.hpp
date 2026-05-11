// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planner_msgs:msg/NoFlyZoneArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/msg/no_fly_zone_array.hpp"


#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__STRUCT_HPP_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'zones'
#include "planner_msgs/msg/detail/no_fly_zone__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planner_msgs__msg__NoFlyZoneArray __attribute__((deprecated))
#else
# define DEPRECATED__planner_msgs__msg__NoFlyZoneArray __declspec(deprecated)
#endif

namespace planner_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NoFlyZoneArray_
{
  using Type = NoFlyZoneArray_<ContainerAllocator>;

  explicit NoFlyZoneArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit NoFlyZoneArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _zones_type =
    std::vector<planner_msgs::msg::NoFlyZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planner_msgs::msg::NoFlyZone_<ContainerAllocator>>>;
  _zones_type zones;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__zones(
    const std::vector<planner_msgs::msg::NoFlyZone_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planner_msgs::msg::NoFlyZone_<ContainerAllocator>>> & _arg)
  {
    this->zones = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planner_msgs__msg__NoFlyZoneArray
    std::shared_ptr<planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planner_msgs__msg__NoFlyZoneArray
    std::shared_ptr<planner_msgs::msg::NoFlyZoneArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NoFlyZoneArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->zones != other.zones) {
      return false;
    }
    return true;
  }
  bool operator!=(const NoFlyZoneArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NoFlyZoneArray_

// alias to use template instance with default allocator
using NoFlyZoneArray =
  planner_msgs::msg::NoFlyZoneArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace planner_msgs

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE_ARRAY__STRUCT_HPP_

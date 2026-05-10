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
// Member 'center'
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
  : center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->radius = 0.0;
      this->min_altitude = 0.0;
      this->max_altitude = 0.0;
    }
  }

  explicit NoFlyZone_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->radius = 0.0;
      this->min_altitude = 0.0;
      this->max_altitude = 0.0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _center_type center;
  using _radius_type =
    double;
  _radius_type radius;
  using _min_altitude_type =
    double;
  _min_altitude_type min_altitude;
  using _max_altitude_type =
    double;
  _max_altitude_type max_altitude;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__min_altitude(
    const double & _arg)
  {
    this->min_altitude = _arg;
    return *this;
  }
  Type & set__max_altitude(
    const double & _arg)
  {
    this->max_altitude = _arg;
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
    if (this->id != other.id) {
      return false;
    }
    if (this->center != other.center) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->min_altitude != other.min_altitude) {
      return false;
    }
    if (this->max_altitude != other.max_altitude) {
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

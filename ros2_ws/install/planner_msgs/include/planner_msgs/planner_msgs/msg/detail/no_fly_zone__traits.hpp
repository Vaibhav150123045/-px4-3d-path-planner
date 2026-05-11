// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from planner_msgs:msg/NoFlyZone.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/msg/no_fly_zone.hpp"


#ifndef PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__TRAITS_HPP_
#define PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "planner_msgs/msg/detail/no_fly_zone__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'min_corner'
// Member 'max_corner'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace planner_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NoFlyZone & msg,
  std::ostream & out)
{
  out << "{";
  // member: min_corner
  {
    out << "min_corner: ";
    to_flow_style_yaml(msg.min_corner, out);
    out << ", ";
  }

  // member: max_corner
  {
    out << "max_corner: ";
    to_flow_style_yaml(msg.max_corner, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NoFlyZone & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: min_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_corner:\n";
    to_block_style_yaml(msg.min_corner, out, indentation + 2);
  }

  // member: max_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_corner:\n";
    to_block_style_yaml(msg.max_corner, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NoFlyZone & msg, bool use_flow_style = false)
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

}  // namespace planner_msgs

namespace rosidl_generator_traits
{

[[deprecated("use planner_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const planner_msgs::msg::NoFlyZone & msg,
  std::ostream & out, size_t indentation = 0)
{
  planner_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use planner_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const planner_msgs::msg::NoFlyZone & msg)
{
  return planner_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<planner_msgs::msg::NoFlyZone>()
{
  return "planner_msgs::msg::NoFlyZone";
}

template<>
inline const char * name<planner_msgs::msg::NoFlyZone>()
{
  return "planner_msgs/msg/NoFlyZone";
}

template<>
struct has_fixed_size<planner_msgs::msg::NoFlyZone>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<planner_msgs::msg::NoFlyZone>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<planner_msgs::msg::NoFlyZone>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PLANNER_MSGS__MSG__DETAIL__NO_FLY_ZONE__TRAITS_HPP_

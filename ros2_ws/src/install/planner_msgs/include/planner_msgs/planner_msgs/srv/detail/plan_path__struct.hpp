// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from planner_msgs:srv/PlanPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/srv/plan_path.hpp"


#ifndef PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__STRUCT_HPP_
#define PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planner_msgs__srv__PlanPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__planner_msgs__srv__PlanPath_Request __declspec(deprecated)
#endif

namespace planner_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanPath_Request_
{
  using Type = PlanPath_Request_<ContainerAllocator>;

  explicit PlanPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_altitude = 0.0;
      this->max_altitude = 0.0;
    }
  }

  explicit PlanPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    goal(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_altitude = 0.0;
      this->max_altitude = 0.0;
    }
  }

  // field types and members
  using _start_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_type start;
  using _goal_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _goal_type goal;
  using _min_altitude_type =
    double;
  _min_altitude_type min_altitude;
  using _max_altitude_type =
    double;
  _max_altitude_type max_altitude;

  // setters for named parameter idiom
  Type & set__start(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__goal(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
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
    planner_msgs::srv::PlanPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const planner_msgs::srv::PlanPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planner_msgs::srv::PlanPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planner_msgs::srv::PlanPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planner_msgs::srv::PlanPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::srv::PlanPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planner_msgs::srv::PlanPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::srv::PlanPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planner_msgs::srv::PlanPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planner_msgs::srv::PlanPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planner_msgs__srv__PlanPath_Request
    std::shared_ptr<planner_msgs::srv::PlanPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planner_msgs__srv__PlanPath_Request
    std::shared_ptr<planner_msgs::srv::PlanPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanPath_Request_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->goal != other.goal) {
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
  bool operator!=(const PlanPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanPath_Request_

// alias to use template instance with default allocator
using PlanPath_Request =
  planner_msgs::srv::PlanPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planner_msgs


// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planner_msgs__srv__PlanPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__planner_msgs__srv__PlanPath_Response __declspec(deprecated)
#endif

namespace planner_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanPath_Response_
{
  using Type = PlanPath_Response_<ContainerAllocator>;

  explicit PlanPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->path_length = 0.0;
      this->message = "";
    }
  }

  explicit PlanPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->path_length = 0.0;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;
  using _path_length_type =
    double;
  _path_length_type path_length;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__path_length(
    const double & _arg)
  {
    this->path_length = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planner_msgs::srv::PlanPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const planner_msgs::srv::PlanPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planner_msgs::srv::PlanPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planner_msgs::srv::PlanPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planner_msgs::srv::PlanPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::srv::PlanPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planner_msgs::srv::PlanPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::srv::PlanPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planner_msgs::srv::PlanPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planner_msgs::srv::PlanPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planner_msgs__srv__PlanPath_Response
    std::shared_ptr<planner_msgs::srv::PlanPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planner_msgs__srv__PlanPath_Response
    std::shared_ptr<planner_msgs::srv::PlanPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanPath_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->path_length != other.path_length) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanPath_Response_

// alias to use template instance with default allocator
using PlanPath_Response =
  planner_msgs::srv::PlanPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planner_msgs


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__planner_msgs__srv__PlanPath_Event __attribute__((deprecated))
#else
# define DEPRECATED__planner_msgs__srv__PlanPath_Event __declspec(deprecated)
#endif

namespace planner_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PlanPath_Event_
{
  using Type = PlanPath_Event_<ContainerAllocator>;

  explicit PlanPath_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit PlanPath_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<planner_msgs::srv::PlanPath_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planner_msgs::srv::PlanPath_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<planner_msgs::srv::PlanPath_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planner_msgs::srv::PlanPath_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<planner_msgs::srv::PlanPath_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planner_msgs::srv::PlanPath_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<planner_msgs::srv::PlanPath_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<planner_msgs::srv::PlanPath_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    planner_msgs::srv::PlanPath_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const planner_msgs::srv::PlanPath_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<planner_msgs::srv::PlanPath_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<planner_msgs::srv::PlanPath_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      planner_msgs::srv::PlanPath_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::srv::PlanPath_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      planner_msgs::srv::PlanPath_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<planner_msgs::srv::PlanPath_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<planner_msgs::srv::PlanPath_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<planner_msgs::srv::PlanPath_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__planner_msgs__srv__PlanPath_Event
    std::shared_ptr<planner_msgs::srv::PlanPath_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__planner_msgs__srv__PlanPath_Event
    std::shared_ptr<planner_msgs::srv::PlanPath_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanPath_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanPath_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanPath_Event_

// alias to use template instance with default allocator
using PlanPath_Event =
  planner_msgs::srv::PlanPath_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace planner_msgs

namespace planner_msgs
{

namespace srv
{

struct PlanPath
{
  using Request = planner_msgs::srv::PlanPath_Request;
  using Response = planner_msgs::srv::PlanPath_Response;
  using Event = planner_msgs::srv::PlanPath_Event;
};

}  // namespace srv

}  // namespace planner_msgs

#endif  // PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__STRUCT_HPP_

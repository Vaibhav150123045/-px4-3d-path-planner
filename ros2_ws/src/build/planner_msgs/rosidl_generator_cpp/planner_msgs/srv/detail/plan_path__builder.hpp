// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from planner_msgs:srv/PlanPath.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "planner_msgs/srv/plan_path.hpp"


#ifndef PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__BUILDER_HPP_
#define PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "planner_msgs/srv/detail/plan_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace planner_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanPath_Request_max_altitude
{
public:
  explicit Init_PlanPath_Request_max_altitude(::planner_msgs::srv::PlanPath_Request & msg)
  : msg_(msg)
  {}
  ::planner_msgs::srv::PlanPath_Request max_altitude(::planner_msgs::srv::PlanPath_Request::_max_altitude_type arg)
  {
    msg_.max_altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Request msg_;
};

class Init_PlanPath_Request_min_altitude
{
public:
  explicit Init_PlanPath_Request_min_altitude(::planner_msgs::srv::PlanPath_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Request_max_altitude min_altitude(::planner_msgs::srv::PlanPath_Request::_min_altitude_type arg)
  {
    msg_.min_altitude = std::move(arg);
    return Init_PlanPath_Request_max_altitude(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Request msg_;
};

class Init_PlanPath_Request_goal
{
public:
  explicit Init_PlanPath_Request_goal(::planner_msgs::srv::PlanPath_Request & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Request_min_altitude goal(::planner_msgs::srv::PlanPath_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return Init_PlanPath_Request_min_altitude(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Request msg_;
};

class Init_PlanPath_Request_start
{
public:
  Init_PlanPath_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_Request_goal start(::planner_msgs::srv::PlanPath_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_PlanPath_Request_goal(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planner_msgs::srv::PlanPath_Request>()
{
  return planner_msgs::srv::builder::Init_PlanPath_Request_start();
}

}  // namespace planner_msgs


namespace planner_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanPath_Response_message
{
public:
  explicit Init_PlanPath_Response_message(::planner_msgs::srv::PlanPath_Response & msg)
  : msg_(msg)
  {}
  ::planner_msgs::srv::PlanPath_Response message(::planner_msgs::srv::PlanPath_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Response msg_;
};

class Init_PlanPath_Response_path_length
{
public:
  explicit Init_PlanPath_Response_path_length(::planner_msgs::srv::PlanPath_Response & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Response_message path_length(::planner_msgs::srv::PlanPath_Response::_path_length_type arg)
  {
    msg_.path_length = std::move(arg);
    return Init_PlanPath_Response_message(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Response msg_;
};

class Init_PlanPath_Response_path
{
public:
  explicit Init_PlanPath_Response_path(::planner_msgs::srv::PlanPath_Response & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Response_path_length path(::planner_msgs::srv::PlanPath_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_PlanPath_Response_path_length(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Response msg_;
};

class Init_PlanPath_Response_success
{
public:
  Init_PlanPath_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_Response_path success(::planner_msgs::srv::PlanPath_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PlanPath_Response_path(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planner_msgs::srv::PlanPath_Response>()
{
  return planner_msgs::srv::builder::Init_PlanPath_Response_success();
}

}  // namespace planner_msgs


namespace planner_msgs
{

namespace srv
{

namespace builder
{

class Init_PlanPath_Event_response
{
public:
  explicit Init_PlanPath_Event_response(::planner_msgs::srv::PlanPath_Event & msg)
  : msg_(msg)
  {}
  ::planner_msgs::srv::PlanPath_Event response(::planner_msgs::srv::PlanPath_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Event msg_;
};

class Init_PlanPath_Event_request
{
public:
  explicit Init_PlanPath_Event_request(::planner_msgs::srv::PlanPath_Event & msg)
  : msg_(msg)
  {}
  Init_PlanPath_Event_response request(::planner_msgs::srv::PlanPath_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_PlanPath_Event_response(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Event msg_;
};

class Init_PlanPath_Event_info
{
public:
  Init_PlanPath_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanPath_Event_request info(::planner_msgs::srv::PlanPath_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_PlanPath_Event_request(msg_);
  }

private:
  ::planner_msgs::srv::PlanPath_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::planner_msgs::srv::PlanPath_Event>()
{
  return planner_msgs::srv::builder::Init_PlanPath_Event_info();
}

}  // namespace planner_msgs

#endif  // PLANNER_MSGS__SRV__DETAIL__PLAN_PATH__BUILDER_HPP_

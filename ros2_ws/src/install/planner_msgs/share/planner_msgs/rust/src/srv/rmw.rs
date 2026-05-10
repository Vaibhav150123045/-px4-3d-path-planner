#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "planner_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planner_msgs__srv__PlanPath_Request() -> *const std::ffi::c_void;
}

#[link(name = "planner_msgs__rosidl_generator_c")]
extern "C" {
    fn planner_msgs__srv__PlanPath_Request__init(msg: *mut PlanPath_Request) -> bool;
    fn planner_msgs__srv__PlanPath_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlanPath_Request>, size: usize) -> bool;
    fn planner_msgs__srv__PlanPath_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlanPath_Request>);
    fn planner_msgs__srv__PlanPath_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlanPath_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<PlanPath_Request>) -> bool;
}

// Corresponds to planner_msgs__srv__PlanPath_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanPath_Request {
    /// Starting 3D coordinate
    pub start: geometry_msgs::msg::rmw::Point,

    /// Target 3D coordinate
    pub goal: geometry_msgs::msg::rmw::Point,

    /// UAV floor constraint for this specific mission
    pub min_altitude: f64,

    /// UAV ceiling constraint for this specific mission
    pub max_altitude: f64,

}



impl Default for PlanPath_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planner_msgs__srv__PlanPath_Request__init(&mut msg as *mut _) {
        panic!("Call to planner_msgs__srv__PlanPath_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlanPath_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__srv__PlanPath_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__srv__PlanPath_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__srv__PlanPath_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlanPath_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlanPath_Request where Self: Sized {
  const TYPE_NAME: &'static str = "planner_msgs/srv/PlanPath_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planner_msgs__srv__PlanPath_Request() }
  }
}


#[link(name = "planner_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planner_msgs__srv__PlanPath_Response() -> *const std::ffi::c_void;
}

#[link(name = "planner_msgs__rosidl_generator_c")]
extern "C" {
    fn planner_msgs__srv__PlanPath_Response__init(msg: *mut PlanPath_Response) -> bool;
    fn planner_msgs__srv__PlanPath_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PlanPath_Response>, size: usize) -> bool;
    fn planner_msgs__srv__PlanPath_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PlanPath_Response>);
    fn planner_msgs__srv__PlanPath_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PlanPath_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<PlanPath_Response>) -> bool;
}

// Corresponds to planner_msgs__srv__PlanPath_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PlanPath_Response {
    /// True if a path was found, False if impossible
    pub success: bool,

    /// The resulting sequence of 3D waypoints
    pub path: nav_msgs::msg::rmw::Path,

    /// Total distance of the calculated path
    pub path_length: f64,

    /// Debug message (e.g., "Goal inside No-Fly Zone")
    pub message: rosidl_runtime_rs::String,

}



impl Default for PlanPath_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planner_msgs__srv__PlanPath_Response__init(&mut msg as *mut _) {
        panic!("Call to planner_msgs__srv__PlanPath_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PlanPath_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__srv__PlanPath_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__srv__PlanPath_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__srv__PlanPath_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PlanPath_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PlanPath_Response where Self: Sized {
  const TYPE_NAME: &'static str = "planner_msgs/srv/PlanPath_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planner_msgs__srv__PlanPath_Response() }
  }
}






#[link(name = "planner_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__planner_msgs__srv__PlanPath() -> *const std::ffi::c_void;
}

// Corresponds to planner_msgs__srv__PlanPath
#[allow(missing_docs, non_camel_case_types)]
pub struct PlanPath;

impl rosidl_runtime_rs::Service for PlanPath {
    type Request = PlanPath_Request;
    type Response = PlanPath_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__planner_msgs__srv__PlanPath() }
    }
}



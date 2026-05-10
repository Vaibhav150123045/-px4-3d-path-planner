#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "planner_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planner_msgs__msg__NoFlyZone() -> *const std::ffi::c_void;
}

#[link(name = "planner_msgs__rosidl_generator_c")]
extern "C" {
    fn planner_msgs__msg__NoFlyZone__init(msg: *mut NoFlyZone) -> bool;
    fn planner_msgs__msg__NoFlyZone__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NoFlyZone>, size: usize) -> bool;
    fn planner_msgs__msg__NoFlyZone__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NoFlyZone>);
    fn planner_msgs__msg__NoFlyZone__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NoFlyZone>, out_seq: *mut rosidl_runtime_rs::Sequence<NoFlyZone>) -> bool;
}

// Corresponds to planner_msgs__msg__NoFlyZone
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Defines a cylindrical no-fly zone in 3D space

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NoFlyZone {
    /// Unique identifier for the zone
    pub id: rosidl_runtime_rs::String,

    /// X, Y center of the no-fly zone
    pub center: geometry_msgs::msg::rmw::Point,

    /// Radius of the no-fly zone in meters
    pub radius: f64,

    /// Minimum altitude of the zone (usually 0)
    pub min_altitude: f64,

    /// Maximum altitude of the zone
    pub max_altitude: f64,

}



impl Default for NoFlyZone {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planner_msgs__msg__NoFlyZone__init(&mut msg as *mut _) {
        panic!("Call to planner_msgs__msg__NoFlyZone__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NoFlyZone {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__msg__NoFlyZone__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__msg__NoFlyZone__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__msg__NoFlyZone__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NoFlyZone {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NoFlyZone where Self: Sized {
  const TYPE_NAME: &'static str = "planner_msgs/msg/NoFlyZone";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planner_msgs__msg__NoFlyZone() }
  }
}


#[link(name = "planner_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__planner_msgs__msg__NoFlyZoneArray() -> *const std::ffi::c_void;
}

#[link(name = "planner_msgs__rosidl_generator_c")]
extern "C" {
    fn planner_msgs__msg__NoFlyZoneArray__init(msg: *mut NoFlyZoneArray) -> bool;
    fn planner_msgs__msg__NoFlyZoneArray__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NoFlyZoneArray>, size: usize) -> bool;
    fn planner_msgs__msg__NoFlyZoneArray__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NoFlyZoneArray>);
    fn planner_msgs__msg__NoFlyZoneArray__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NoFlyZoneArray>, out_seq: *mut rosidl_runtime_rs::Sequence<NoFlyZoneArray>) -> bool;
}

// Corresponds to planner_msgs__msg__NoFlyZoneArray
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// An array of no-fly zones to be published to the planner

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NoFlyZoneArray {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub zones: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NoFlyZone>,

}



impl Default for NoFlyZoneArray {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !planner_msgs__msg__NoFlyZoneArray__init(&mut msg as *mut _) {
        panic!("Call to planner_msgs__msg__NoFlyZoneArray__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NoFlyZoneArray {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__msg__NoFlyZoneArray__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__msg__NoFlyZoneArray__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { planner_msgs__msg__NoFlyZoneArray__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NoFlyZoneArray {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NoFlyZoneArray where Self: Sized {
  const TYPE_NAME: &'static str = "planner_msgs/msg/NoFlyZoneArray";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__planner_msgs__msg__NoFlyZoneArray() }
  }
}



// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from planner_msgs:msg/NoFlyZoneArray.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "planner_msgs/msg/detail/no_fly_zone_array__struct.h"
#include "planner_msgs/msg/detail/no_fly_zone_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "planner_msgs/msg/detail/no_fly_zone__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool planner_msgs__msg__no_fly_zone__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * planner_msgs__msg__no_fly_zone__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool planner_msgs__msg__no_fly_zone_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("planner_msgs.msg._no_fly_zone_array.NoFlyZoneArray", full_classname_dest, 50) == 0);
  }
  planner_msgs__msg__NoFlyZoneArray * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // zones
    PyObject * field = PyObject_GetAttrString(_pymsg, "zones");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'zones'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!planner_msgs__msg__NoFlyZone__Sequence__init(&(ros_message->zones), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create planner_msgs__msg__NoFlyZone__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    planner_msgs__msg__NoFlyZone * dest = ros_message->zones.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!planner_msgs__msg__no_fly_zone__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * planner_msgs__msg__no_fly_zone_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NoFlyZoneArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("planner_msgs.msg._no_fly_zone_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NoFlyZoneArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  planner_msgs__msg__NoFlyZoneArray * ros_message = (planner_msgs__msg__NoFlyZoneArray *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // zones
    PyObject * field = NULL;
    size_t size = ros_message->zones.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    planner_msgs__msg__NoFlyZone * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->zones.data[i]);
      PyObject * pyitem = planner_msgs__msg__no_fly_zone__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "zones", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "youbot_msgs: 1 messages, 0 services")

set(MSG_I_FLAGS "-Iyoubot_msgs:/home/longfei/catkin_ws/src/youbot/youbot_msgs/msg;-Istd_msgs:/opt/ros/hydro/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(youbot_msgs_generate_messages ALL)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(youbot_msgs
  "/home/longfei/catkin_ws/src/youbot/youbot_msgs/msg/UpdateDependency.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/youbot_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(youbot_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/youbot_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(youbot_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(youbot_msgs_generate_messages youbot_msgs_generate_messages_cpp)

# target for backward compatibility
add_custom_target(youbot_msgs_gencpp)
add_dependencies(youbot_msgs_gencpp youbot_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS youbot_msgs_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(youbot_msgs
  "/home/longfei/catkin_ws/src/youbot/youbot_msgs/msg/UpdateDependency.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/youbot_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(youbot_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/youbot_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(youbot_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(youbot_msgs_generate_messages youbot_msgs_generate_messages_lisp)

# target for backward compatibility
add_custom_target(youbot_msgs_genlisp)
add_dependencies(youbot_msgs_genlisp youbot_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS youbot_msgs_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(youbot_msgs
  "/home/longfei/catkin_ws/src/youbot/youbot_msgs/msg/UpdateDependency.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/youbot_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(youbot_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/youbot_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(youbot_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(youbot_msgs_generate_messages youbot_msgs_generate_messages_py)

# target for backward compatibility
add_custom_target(youbot_msgs_genpy)
add_dependencies(youbot_msgs_genpy youbot_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS youbot_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/youbot_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/youbot_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(youbot_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/youbot_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/youbot_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(youbot_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/youbot_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/youbot_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/youbot_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(youbot_msgs_generate_messages_py std_msgs_generate_messages_py)

# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "rbx2_utils: 0 messages, 2 services")

set(MSG_I_FLAGS "-Istd_msgs:/opt/ros/hydro/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(rbx2_utils_generate_messages ALL)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages

### Generating Services
_generate_srv_cpp(rbx2_utils
  "/home/longfei/catkin_ws/src/rbx2/rbx2_utils/srv/KillProcess.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rbx2_utils
)
_generate_srv_cpp(rbx2_utils
  "/home/longfei/catkin_ws/src/rbx2/rbx2_utils/srv/LaunchProcess.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rbx2_utils
)

### Generating Module File
_generate_module_cpp(rbx2_utils
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rbx2_utils
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(rbx2_utils_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(rbx2_utils_generate_messages rbx2_utils_generate_messages_cpp)

# target for backward compatibility
add_custom_target(rbx2_utils_gencpp)
add_dependencies(rbx2_utils_gencpp rbx2_utils_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rbx2_utils_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages

### Generating Services
_generate_srv_lisp(rbx2_utils
  "/home/longfei/catkin_ws/src/rbx2/rbx2_utils/srv/KillProcess.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rbx2_utils
)
_generate_srv_lisp(rbx2_utils
  "/home/longfei/catkin_ws/src/rbx2/rbx2_utils/srv/LaunchProcess.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rbx2_utils
)

### Generating Module File
_generate_module_lisp(rbx2_utils
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rbx2_utils
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(rbx2_utils_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(rbx2_utils_generate_messages rbx2_utils_generate_messages_lisp)

# target for backward compatibility
add_custom_target(rbx2_utils_genlisp)
add_dependencies(rbx2_utils_genlisp rbx2_utils_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rbx2_utils_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages

### Generating Services
_generate_srv_py(rbx2_utils
  "/home/longfei/catkin_ws/src/rbx2/rbx2_utils/srv/KillProcess.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rbx2_utils
)
_generate_srv_py(rbx2_utils
  "/home/longfei/catkin_ws/src/rbx2/rbx2_utils/srv/LaunchProcess.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rbx2_utils
)

### Generating Module File
_generate_module_py(rbx2_utils
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rbx2_utils
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(rbx2_utils_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(rbx2_utils_generate_messages rbx2_utils_generate_messages_py)

# target for backward compatibility
add_custom_target(rbx2_utils_genpy)
add_dependencies(rbx2_utils_genpy rbx2_utils_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS rbx2_utils_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rbx2_utils)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/rbx2_utils
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(rbx2_utils_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rbx2_utils)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/rbx2_utils
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(rbx2_utils_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rbx2_utils)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rbx2_utils\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/rbx2_utils
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(rbx2_utils_generate_messages_py std_msgs_generate_messages_py)

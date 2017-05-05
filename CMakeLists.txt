set(project_name test1)
project(${project_name})

# 设置显示构建过程详细信息，也可在make时指定VERBOSE=1
#set(CMAKE_VERBOSE_MAKEFILE on)

# 命令不区分大小写，但变量和参数区分，下面注释message不会输出任何内容
#message("${project_name}_BINARY_DIR: ${TEST1_BINARY_DIR}")

message("${project_name}_BINARY_DIR: ${${project_name}_BINARY_DIR}")
message("${project_name}_SOURCE_DIR: ${${project_name}_SOURCE_DIR}")

set(lib_src_files lib.c)
set(${project_name}_src_files test1)
set(${project_name}_src_files test1)

add_library(hello ${lib_src_files})
set_target_properties(hello PROPERTIES OUTPUT_NAME main)

add_library(hello ${lib_src_files})
set_target_properties(hello PROPERTIES OUTPUT_NAME main)

add_executable(main ${test1_src_files})
target_link_libraries(main hello)

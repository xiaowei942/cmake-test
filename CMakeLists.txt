cmake_minimum_required(VERSION 2.8.1)

set(CMAKE_MACOSX_RPATH 0)

set(project_name test1)
project(${project_name})

#add_subdirectory(src bin)
#add_subdirectory(libhello lib)

add_subdirectory(src)

set (BUILD_SHARED_LIBS on)
add_subdirectory(libhello)

cmake_minimum_required(VERSION 2.8.1)

set(CMAKE_MACOSX_RPATH 0)

set(project_name test1)
project(${project_name})

enable_testing()

#add_subdirectory(src bin)
#add_subdirectory(libhello lib)

add_subdirectory(src)
add_subdirectory(tests/test-sum)
add_subdirectory(tests/test-sub)

set (BUILD_SHARED_LIBS on)
add_subdirectory(libhello)

#add_test(TEST_SUM test_sum 1 3)

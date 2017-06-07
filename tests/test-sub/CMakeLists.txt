include_directories(${PROJECT_SOURCE_DIR}/libhello)

add_executable(test_sub test_sub.c)
target_link_libraries(test_sub libhello)

#add_test(TEST_sub test_sub 1 3 4)
add_test(NAME TEST_SUB COMMAND test_sub 1 4)
set_tests_properties(TEST_SUB PROPERTIES PASS_REGULAR_EXPRESSION "RESULT: 5")

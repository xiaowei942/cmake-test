include_directories(${PROJECT_SOURCE_DIR}/libhello)

add_executable(test_sum test_sum.c)
target_link_libraries(test_sum libhello)

#add_test(TEST_SUM test_sum 1 3 4)
add_test(NAME TEST_SUM COMMAND test_sum 1 4)
set_tests_properties(TEST_SUM PROPERTIES PASS_REGULAR_EXPRESSION "RESULT: 5")

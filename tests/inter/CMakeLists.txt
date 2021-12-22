add_executable(testinter1 inter1.cc)
target_link_libraries(testinter1 inter1 gtest_main)
gtest_discover_tests(testinter1)

add_executable(testinter2 inter2.cc)
target_link_libraries(testinter2 inter2 gtest_main)
gtest_discover_tests(testinter2)

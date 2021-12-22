add_executable(testc1 c1.cc)
target_link_libraries(testc1 c1 gtest_main)
gtest_discover_tests(testc1)

add_executable(testc2 c2.cc)
target_link_libraries(testc2 c2 gtest_main)
gtest_discover_tests(testc2)

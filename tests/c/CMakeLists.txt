add_executable(testc1 c1.cc)
target_link_libraries(testc1 c1 gtest_main)
gtest_discover_tests(testc1)
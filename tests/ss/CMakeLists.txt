add_executable(testss1 ss1.cc)
target_link_libraries(testss1 ss1 gtest_main)
gtest_discover_tests(testss1)
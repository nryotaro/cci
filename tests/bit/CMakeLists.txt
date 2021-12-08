add_executable(testbit1 bit1.cc)
target_link_libraries(testbit1 bit1 gtest_main)
gtest_discover_tests(testbit1)
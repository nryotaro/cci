add_executable(testtg1 tg1.cc)
target_link_libraries(testtg1 tg1 gtest_main)
gtest_discover_tests(testtg1)
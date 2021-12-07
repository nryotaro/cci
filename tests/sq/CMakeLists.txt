add_executable(testsq1 sq1.cc)
target_link_libraries(testsq1 sq1 gtest_main)
gtest_discover_tests(testsq1)
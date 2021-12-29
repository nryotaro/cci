add_executable(testsq1 sq1.cc)
target_link_libraries(testsq1 sq1 gtest_main)
gtest_discover_tests(testsq1)

add_executable(testsq2 sq2.cc)
target_link_libraries(testsq2 sq2 gtest_main)
gtest_discover_tests(testsq2)


add_executable(testsq3 sq3.cc)
target_link_libraries(testsq3 sq3 gtest_main)
gtest_discover_tests(testsq3)

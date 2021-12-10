add_executable(testrd1 rd1.cc)
target_link_libraries(testrd1 rd1 gtest_main)
gtest_discover_tests(testrd1)
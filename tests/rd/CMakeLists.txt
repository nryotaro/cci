add_executable(testrd1 rd1.cc)
target_link_libraries(testrd1 rd1 gtest_main)
gtest_discover_tests(testrd1)

add_executable(testrd2 rd2.cc)
target_link_libraries(testrd2 rd2 gtest_main)
gtest_discover_tests(testrd2)

add_executable(testrd3 rd3.cc)
target_link_libraries(testrd3 rd3 gtest_main)
gtest_discover_tests(testrd3)

add_executable(testrd4 rd4.cc)
target_link_libraries(testrd4 rd4 gtest_main)
gtest_discover_tests(testrd4)

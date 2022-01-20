add_executable(testtg1 tg1.cc)
target_link_libraries(testtg1 tg1 gtest_main)
gtest_discover_tests(testtg1)

add_executable(testtg2 tg2.cc)
target_link_libraries(testtg2 tg2 gtest_main)
gtest_discover_tests(testtg2)

add_executable(testtg3 tg3.cc)
target_link_libraries(testtg3 tg3 gtest_main)
gtest_discover_tests(testtg3)

add_executable(testtg4 tg4.cc)
target_link_libraries(testtg4 tg4 gtest_main)
gtest_discover_tests(testtg4)

add_executable(testtg5 tg5.cc)
target_link_libraries(testtg5 tg5 gtest_main)
gtest_discover_tests(testtg5)

add_executable(testtg6 tg6.cc)
target_link_libraries(testtg6 tg6 gtest_main)
gtest_discover_tests(testtg6)

add_executable(testtg7 tg7.cc)
target_link_libraries(testtg7 tg7 gtest_main)
gtest_discover_tests(testtg7)

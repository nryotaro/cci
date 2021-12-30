add_executable(testss1 ss1.cc)
target_link_libraries(testss1 ss1 gtest_main)
gtest_discover_tests(testss1)

add_executable(testss2 ss2.cc)
target_link_libraries(testss2 ss2 gtest_main)
gtest_discover_tests(testss2)

add_executable(testas1 as1.cc)
target_link_libraries(testas1 as1 gtest_main)
gtest_discover_tests(testas1)

add_executable(testas2 as2.cc)
target_link_libraries(testas2 as2 gtest_main)
gtest_discover_tests(testas2)
add_executable(testas1 as1.cc)
target_link_libraries(testas1 as1 gtest_main)
gtest_discover_tests(testas1)

add_executable(testas2 as2.cc)
target_link_libraries(testas2 as2 gtest_main)
gtest_discover_tests(testas2)

add_executable(testas3 as3.cc)
target_link_libraries(testas3 as3 gtest_main)
gtest_discover_tests(testas3)

add_executable(testas4 as4.cc)
target_link_libraries(testas4 as4 gtest_main)
gtest_discover_tests(testas4)

add_executable(testas5 as5.cc)
target_link_libraries(testas5 as5 gtest_main)
gtest_discover_tests(testas5)

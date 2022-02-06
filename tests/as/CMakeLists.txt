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

add_executable(testas6 as6.cc)
target_link_libraries(testas6 as6 gtest_main)
gtest_discover_tests(testas6)

add_executable(testas7 as7.cc)
target_link_libraries(testas7 as7 gtest_main)
gtest_discover_tests(testas7)

add_executable(testas8 as8.cc)
target_link_libraries(testas8 as8 gtest_main)
gtest_discover_tests(testas8)

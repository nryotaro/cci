add_executable(testadv1 adv1.cc)
target_link_libraries(testadv1 adv1 gtest_main)
gtest_discover_tests(testadv1)

add_executable(testadv2 adv2.cc)
target_link_libraries(testadv2 adv2 gtest_main)
gtest_discover_tests(testadv2)

add_executable(testadv4 adv4.cc)
target_link_libraries(testadv4 adv4 gtest_main)
gtest_discover_tests(testadv4)

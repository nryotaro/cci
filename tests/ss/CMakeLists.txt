add_executable(testss1 ss1.cc)
target_link_libraries(testss1 ss1 gtest_main)
gtest_discover_tests(testss1)

add_executable(testss2 ss2.cc)
target_link_libraries(testss2 ss2 gtest_main)
gtest_discover_tests(testss2)

add_executable(testss3 ss3.cc)
target_link_libraries(testss3 ss3 gtest_main)
gtest_discover_tests(testss3)

add_executable(testss4 ss4.cc)
target_link_libraries(testss4 ss4 gtest_main)
gtest_discover_tests(testss4)

add_executable(testss5 ss5.cc)
target_link_libraries(testss5 ss5 gtest_main)
gtest_discover_tests(testss5)

add_executable(testss7 ss7.cc)
target_link_libraries(testss7 ss7 gtest_main)
gtest_discover_tests(testss7)

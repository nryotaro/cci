add_executable(testll1 ll1.cc)
target_link_libraries(testll1 ll1 gtest_main)
gtest_discover_tests(testll1)

add_executable(testll2 ll2.cc)
target_link_libraries(testll2 ll2 gtest_main)
gtest_discover_tests(testll2)

add_executable(testll3 ll3.cc)
target_link_libraries(testll3 ll3 gtest_main)
gtest_discover_tests(testll3)

add_executable(testll4 ll4.cc)
target_link_libraries(testll4 ll4 gtest_main)
gtest_discover_tests(testll4)

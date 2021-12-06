add_executable(testll1 ll1.cc)
target_link_libraries(testll1 ll1 gtest_main)
gtest_discover_tests(testll1)
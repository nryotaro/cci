add_executable(testoop2 oop2.cc)
target_link_libraries(testoop2 oop2 gtest_main)
gtest_discover_tests(testoop2)
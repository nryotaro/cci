add_executable(testinter1 inter1.cc)
target_link_libraries(testinter1 inter1 gtest_main)
gtest_discover_tests(testinter1)

add_executable(testinter4 inter4.cc)
target_link_libraries(testinter4 inter4 gtest_main)
gtest_discover_tests(testinter4)

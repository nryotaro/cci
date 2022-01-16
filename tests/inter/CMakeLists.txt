add_executable(testinter1 inter1.cc)
target_link_libraries(testinter1 inter1 gtest_main)
gtest_discover_tests(testinter1)

add_executable(testinter4 inter4.cc)
target_link_libraries(testinter4 inter4 gtest_main)
gtest_discover_tests(testinter4)

add_executable(testinter5 inter5.cc)
target_link_libraries(testinter5 inter5 gtest_main)
gtest_discover_tests(testinter5)

add_executable(testinter6 inter6.cc)
target_link_libraries(testinter6 inter6 gtest_main)
gtest_discover_tests(testinter6)

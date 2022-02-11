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

add_executable(testinter7 inter7.cc)
target_link_libraries(testinter7 inter7 gtest_main)
gtest_discover_tests(testinter7)

add_executable(testinter9 inter9.cc)
target_link_libraries(testinter9 inter9 gtest_main)
gtest_discover_tests(testinter9)

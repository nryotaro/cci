add_executable(testoop2 oop2.cc)
target_link_libraries(testoop2 oop2 gtest_main)
gtest_discover_tests(testoop2)

add_executable(testoop4 oop4.cc)
target_link_libraries(testoop4 oop4 gtest_main)
gtest_discover_tests(testoop4)

add_executable(testoop9 oop9.cc)
target_link_libraries(testoop9 oop9 gtest_main)
gtest_discover_tests(testoop9)

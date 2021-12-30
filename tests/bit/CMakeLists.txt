add_executable(testbit1 bit1.cc)
target_link_libraries(testbit1 bit1 gtest_main)
gtest_discover_tests(testbit1)

add_executable(testbit2 bit2.cc)
target_link_libraries(testbit2 bit2 gtest_main)
gtest_discover_tests(testbit2)

add_executable(testbit3 bit3.cc)
target_link_libraries(testbit3 bit3 gtest_main)
gtest_discover_tests(testbit3)

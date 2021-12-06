include_directories(${PROJECT_SOURCE_DIR}/src)
include(GoogleTest)

add_executable(testas1 as1.cc)
target_link_libraries(testas1 as1 gtest_main)
gtest_discover_tests(testas1)
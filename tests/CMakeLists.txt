cmake_minimum_required(VERSION 3.14)
project(project_tests)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
find_package(GTest REQUIRED)

include(${CMAKE_CURRENT_LIST_DIR}/../my_class/my_class.cmake)

include_directories("${gtest_SOURCE_DIR}/include"
        "${gmock_SOURCE_DIR}/include")

add_executable(
        run_unit_tests
        test.cpp
        my_class/my_class_test.cpp
        my_class/mock_my_class.h
        ${MY_CLASS}
)
target_link_libraries(
        run_unit_tests
        gtest gtest_main gmock pthread
)

add_test( run_unit_tests run_unit_tests )
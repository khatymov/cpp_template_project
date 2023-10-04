cmake_minimum_required(VERSION 3.2)
project(run_unit_tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-ggdb -fprofile-arcs -ftest-coverage")

SET(CMAKE_CXX_FLAGS "-g ${CMAKE_CXX_FLAGS}")

find_package(GTest REQUIRED)

include(${CMAKE_CURRENT_LIST_DIR}/../my_class/my_class.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/my_class/my_class_test.cmake)

add_executable(
        ${PROJECT_NAME}
        ${MY_CLASS}
        test.cpp
        ${MY_CLASS_TEST}
)
target_link_libraries(
        ${PROJECT_NAME}
        gtest::gtest
)

enable_testing()

add_test(run_unit_tests ${PROJECT_NAME})
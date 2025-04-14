cmake_minimum_required(VERSION 3.19)
project(my_project_lib)

include(${CMAKE_CURRENT_LIST_DIR}/move/move.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/timer/timer.cmake)

find_package(Boost REQUIRED)
find_package(spdlog REQUIRED CONFIG)

# Define the executable target
add_library(${PROJECT_NAME} ${MOVE} ${TIMER})

target_link_libraries(${PROJECT_NAME}
        PUBLIC
        spdlog::spdlog
        boost::boost
)

target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)

target_include_directories(${PROJECT_NAME} PRIVATE timer)

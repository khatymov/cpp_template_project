cmake_minimum_required(VERSION 3.22)
project(my_project LANGUAGES CXX)

# Set C++ standard to 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

find_package(Boost COMPONENTS program_options REQUIRED)
find_package(spdlog REQUIRED CONFIG)

IF (Boost_FOUND)
    INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
    ADD_DEFINITIONS( "-DHAS_BOOST" )
ENDIF()

include_directories(src)

add_executable(${PROJECT_NAME}
                main.cpp)

add_subdirectory(src)

target_link_libraries(${PROJECT_NAME} PRIVATE
        ${PROJECT_NAME}_lib
        boost::boost)

target_compile_options(${PROJECT_NAME} PRIVATE -Werror -Wall -Wextra)

#add_subdirectory(tests)

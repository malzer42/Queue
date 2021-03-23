cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++2a")

project(queue)

include_directories(inc)

file(GLOB SOURCES "src/*.cpp")

add_executable(queue ${SOURCES})

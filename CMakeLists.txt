project(zlogger)
cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

#include_directories(inc)

set(HEADERS inc/logger.hpp)
set(SOURCES src/logger.cpp)

add_library(${CMAKE_PROJECT_NAME} ${HEADERS} ${SOURCES})
add_executable(Sandbox ${HEADERS} main.cpp)
target_link_libraries(Sandbox zlogger)

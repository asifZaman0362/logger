project(zlogger)
cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

#include_directories(inc)

add_library(${CMAKE_PROJECT_NAME} logger.hpp logger.cpp)

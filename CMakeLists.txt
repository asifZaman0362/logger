project(logger)
cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME} src/logger.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)

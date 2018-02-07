cmake_minimum_required(VERSION 3.8)
project(fastsort)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(fastsort ${SOURCE_FILES})
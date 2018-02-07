cmake_minimum_required(VERSION 3.8)
project(snake)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS "-framework OpenGL -framework GLUT")
set(SOURCE_FILES main.cpp game.cpp game.h)
add_executable(snake ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.8)
project(playing_with_cpp_11)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp RangeLoop.h)
add_executable(playing_with_cpp_11 ${SOURCE_FILES})
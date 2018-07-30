cmake_minimum_required(VERSION 3.8)
project(first)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
set(DYNAMIC dynamic/func.cpp)
set(LEETCODE leetcode/leetcode174.cpp)
add_executable(first ${LEETCODE})
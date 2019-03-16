cmake_minimum_required(VERSION 3.13)
project(learnC__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
add_executable(A main.cpp)
add_executable(B test.cpp)
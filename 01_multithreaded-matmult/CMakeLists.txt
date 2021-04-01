cmake_minimum_required(VERSION 3.17)
project(multithreaded_matmult)

set(CMAKE_CXX_STANDARD 17)

add_executable(multithreaded_matmult main.cpp utils.cpp utils.h)
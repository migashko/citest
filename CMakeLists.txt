cmake_minimum_required(VERSION 3.1)
project(citest)
include_directories(.)

add_library(citest citest/citest.cpp)
target_compile_options(citest PRIVATE -std=c++11)



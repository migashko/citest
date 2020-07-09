cmake_minimum_required(VERSION 3.1)
project(citest)
include_directories(.)

find_package(Boost COMPONENTS system program_options filesystem date_time regex REQUIRED)

add_library(citest citest/citest.cpp)
target_compile_options(citest PRIVATE -std=c++11)



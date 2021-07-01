cmake_minimum_required(VERSION 3.5)
project(6)

set(CMAKE_CXX_FLAGS "-std=c++17")

add_executable(6 vending3.cpp read_csv.h write_csv.h write_csv_pool.h)
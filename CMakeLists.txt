cmake_minimum_required(VERSION 3.16)
project(SortBenchmark)

set(CMAKE_CXX_STANDARD 11)

add_executable(SortBenchmark main.cpp StaticList.h StaticListException.h)
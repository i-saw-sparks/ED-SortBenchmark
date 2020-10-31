cmake_minimum_required(VERSION 3.15)
project(SortBenchmark)

set(CMAKE_CXX_STANDARD 11)

add_executable(SortBenchmark main.cpp StaticList.h StaticListException.h RandomListGenerator.cpp RandomListGenerator.h SortBenchmarker.h)
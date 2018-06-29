cmake_minimum_required(VERSION 3.6)
project(ex10_241)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ex10.27.cc)
add_executable(ex10_241 ${SOURCE_FILES})


cmake_minimum_required(VERSION 3.8)
project(inheritance_)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp counter.cpp counter.h)
#set(SOURCE_FILES testDistance.cpp)

add_executable(inheritance_ ${SOURCE_FILES})
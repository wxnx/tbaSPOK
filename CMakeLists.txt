cmake_minimum_required(VERSION 3.13)
project(SPOK)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SPOK
        main.cpp
        spok.cpp
        spok.h)

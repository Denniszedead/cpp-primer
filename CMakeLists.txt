cmake_minimum_required(VERSION 3.25)
project(primer)

set(CMAKE_CXX_STANDARD 17)

add_executable(primer headers/main.cpp headers/wheel.h headers/wheel.cpp headers/car.h headers/trailer.h)

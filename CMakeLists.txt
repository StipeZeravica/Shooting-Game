cmake_minimum_required(VERSION 3.23)
project(untitled3)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled3 src/main.cpp src/Point.cpp Include/Point.hpp Include/Target.hpp src/Shooting.cpp Include/Shooting.hpp src/Target.cpp src/Wepon.cpp Include/Wepon.hpp)

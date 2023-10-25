cmake_minimum_required(VERSION 3.26)
project(IT3040_2023_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(IT3040_2023_1 main.cpp
        Week1/Bai1.1.cpp
        Week1/Bai1.3.cpp
        Week1/Bai1.4.cpp
        Week1/Bai1.5.cpp
        Week1/Bai1.6.cpp
        Week1/Bai1.7.cpp
        Week1/Bai1.8.cpp
        Week1/Bai10.cpp
        Week1/Bai9.cpp
        Week1/Bai2.cpp)
add_executable(new_target Week1/Bai1.1.cpp)
add_executable(new_target1 Week1/Bai1.3.cpp)
add_executable(new_target2 Week1/Bai1.4.cpp)
add_executable(new_target3 Week1/Bai1.5.cpp)
add_executable(new_target4 Week1/Bai1.6.cpp)
add_executable(new_target5 Week1/Bai1.8.cpp)
add_executable(new_target6 Week1/Bai10.cpp)
add_executable(new_target7 Week1/Bai9.cpp)
add_executable(new_target8 Week1/Bai2.cpp)

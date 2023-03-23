cmake_minimum_required(VERSION 3.19)
project(heimaGuanli)

set(CMAKE_CXX_STANDARD 14)

add_executable(heimaGuanli main.cpp workerManager.cpp workerManager.h worker.h employee.h employee.cpp)

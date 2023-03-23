cmake_minimum_required(VERSION 3.19)
project(WorkerManager)

set(CMAKE_CXX_STANDARD 11)

add_executable(WorkerManager main.cpp workerManager.cpp workerManager.h worker.h employee.cpp employee.h)
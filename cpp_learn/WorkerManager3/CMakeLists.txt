cmake_minimum_required(VERSION 3.19)
project(WorkerManager3)

set(CMAKE_CXX_STANDARD 11)

add_executable(WorkerManager3 main.cpp workerManager.cpp workerManager.h worker.h employee.cpp employee.h manger.cpp manger.h boss.cpp boss.h)
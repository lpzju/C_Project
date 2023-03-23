cmake_minimum_required(VERSION 3.19)
project(WorkerManager2)

set(CMAKE_CXX_STANDARD 11)

add_executable(WorkerManager2 main.cpp workerManager.h workerManager.cpp worker.h employee.cpp employee.h manger.cpp manger.h boss.cpp boss.h)
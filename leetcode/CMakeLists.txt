cmake_minimum_required(VERSION 3.19)
project(leetcode C)

set(CMAKE_C_STANDARD 99)

add_executable(leetcode main.c sortAlgorithm/quick.c)
add_executable(1 main/1.c sortAlgorithm/quick.c)
add_executable(quick sortAlgorithm/quick.c)
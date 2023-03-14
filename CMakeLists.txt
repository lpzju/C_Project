cmake_minimum_required(VERSION 3.19)
project(C_Project C)

set(CMAKE_C_STANDARD 99)

add_executable(C_Project main.c leetcode/main/59.c leetcode/main/erweishuzu.c cpp_learn/gouzao.cpp)
add_executable(quick leetcode/sortAlgorithm/quick.c)

add_executable(twoSum leetcode/leetcode/editor/cn/twoSum.c)
#add_executable([739]每日温度 leetcode/leetcode/editor/cn/[739]每日温度.c)
add_executable(erweishuzu leetcode/main/erweishuzu.c)
add_executable(453 leetcode/main/453.c)
add_executable(9 leetcode/main/9.c)
add_executable(13 leetcode/main/13.c)
add_executable(erwei runoob/erwei.c)
add_executable(shuzuzhizhen runoob/shuzuzhizhen.c)
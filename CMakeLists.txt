# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(LoggerTest)

# 设置编译器
set(CMAKE_CXX_STANDARD 11)
add_subdirectory(example)
add_subdirectory(logLib)
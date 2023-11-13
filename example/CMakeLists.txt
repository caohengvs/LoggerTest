# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)
# 项目名称
project(example)
 

# 设置编译器
set(CMAKE_CXX_STANDARD 11)

# 添加源文件
set(SOURCES
    example.cpp
)
# 添加可执行库文件
add_executable(example ${SOURCES})
# 查找MyLibrary库
find_library(MyLibraryLib logLib PATHS D:/source/LoggerTest/build/logLib/Debug)

# 链接MyLibrary库
target_link_libraries(example PRIVATE ${MyLibraryLib})

# 添加头文件目录
target_include_directories(example PRIVATE ../LoggerTest/logLib/include)
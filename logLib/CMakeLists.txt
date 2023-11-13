# CMake 最低版本要求
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(logLib)

# 设置编译器
set(CMAKE_CXX_STANDARD 11)

# 添加源文件
set(SOURCES
    src/ILog.cpp
    src/CLog.cpp
)

# 添加可执行库文件
add_library(logLib STATIC ${SOURCES})
# 查找MyLibrary库
find_library(MyLibraryLib spdlogd PATHS ../spdlogsdk/debug)

# 链接MyLibrary库
target_link_libraries(logLib PRIVATE ${MyLibraryLib})

# 添加头文件目录
target_include_directories(logLib PRIVATE ../spdlogsdk/include)
# CMake 最低版本要求
cmake_minimum_required(VERSION 3.20)

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
add_library(logLib SHARED ${SOURCES})
# 查找MyLibrary库
find_library(MyLibraryLib spdlogd PATHS ../spdlogsdk/debug)

# 链接MyLibrary库
target_link_libraries(logLib PRIVATE ${MyLibraryLib})

# 添加头文件目录
target_include_directories(logLib PRIVATE ../spdlogsdk/include)

set(INSTALLED D:/source/LoggerTest/installed/)

install(TARGETS logLib
    EXPORT logLibTargets
    LIBRARY DESTINATION ${INSTALLED}lib
    ARCHIVE DESTINATION ${INSTALLED}lib
    RUNTIME DESTINATION ${INSTALLED}bin
    INCLUDES DESTINATION ${INSTALLED}include
)

install(FILES
    include/ILog.h
    DESTINATION ${INSTALLED}include/logLib
)

install(EXPORT logLibTargets
    FILE logLibConfig.cmake
    NAMESPACE logLib::
    DESTINATION ${INSTALLED}lib/cmake/logLib
)
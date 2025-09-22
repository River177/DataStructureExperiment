cmake_minimum_required(VERSION 3.16)

project(ExternalSorting
    VERSION 0.1.0
    DESCRIPTION "External Sorting practice project"
    LANGUAGES CXX)

# 默认使用 C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 选项：开启更严格的编译警告
option(EXTERNAL_SORT_ENABLE_WARNINGS "Enable strict compiler warnings" ON)

if(EXTERNAL_SORT_ENABLE_WARNINGS)
    if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        add_compile_options(-Wall -Wextra -Wpedantic)
    elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        add_compile_options(/W4)
    endif()
endif()

# 头文件目录
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# 可执行程序
add_executable(external_sort_demo
    src/main.cpp
)

# 安装与导出（可选）
install(TARGETS external_sort_demo RUNTIME DESTINATION bin)

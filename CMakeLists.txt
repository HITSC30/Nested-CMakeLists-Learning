# Version，cmake版本
cmake_minimum_required(VERSION 3.22.0)

# Project，项目名称及细节
project(HITSC30
VERSION 1.0
DESCRIPTION "A Nested CMakeLists Learning Demo" 
LANGUAGES CXX
)

# C++ Standard，C++标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ProjectType: release/debug
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

#  Output Directory,设置输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Find external Library,查询外部第三方库文件
find_package(Eigen3 3.4 REQUIRED)
if(TARGET Eigen3::Eigen)                
    message(STATUS "******** Eigen3 3.4 found! **********")                
endif()
find_package(Matplot++ REQUIRED)

# add Nested CMakeLists.txt Directory,包含子CMakeLists.txt文件的文件夹
add_subdirectory(src)
add_subdirectory(test/map_test)

#
set(Include_Path_For_Test ${CMAKE_SOURCE_DIR}/include/Dir01)
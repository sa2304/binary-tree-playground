cmake_minimum_required(VERSION 3.14)

project(binary-tree LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(binary_tree STATIC
        binary_tree.cpp
        binary_tree.h
)

add_executable(test_binary_tree main.cpp)
target_link_libraries(test_binary_tree binary_tree)

target_compile_definitions(binary_tree PRIVATE BINARYTREE_LIBRARY)

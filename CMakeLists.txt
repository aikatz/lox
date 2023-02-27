cmake_minimum_required(VERSION 3.22)
project(lox)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_COMPILER clang++-15)
set(CMAKE_C_COMPILER clang-15)

add_executable(lox src/Main.cpp)
target_include_directories(lox PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_sources(lox PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

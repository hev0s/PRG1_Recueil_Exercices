cmake_minimum_required(VERSION 3.25)

project(05_Arrays_vector_string LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Options de compilation
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wconversion -Wall -Wextra -pedantic")

# Project files
add_executable(05_Arrays_vector_string 05_Ex.cpp)

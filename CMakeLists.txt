cmake_minimum_required(VERSION 3.16)
project(DataStructures)
set(CMAKE_CXX_STANDARD 14)
SET(SOURCE_FILES
        src/Sort/BubbleSort/BubbleSort.cpp)
add_executable(DataStructures
        ${SOURCE_FILES}
        main.cpp)
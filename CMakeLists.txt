cmake_minimum_required(VERSION 3.16)
project(DataStructures)
set(CMAKE_CXX_STANDARD 14)
SET(SOURCE_FILES
        src/Sort/BubbleSort/BubbleSort.cpp src/Sort/SimpleSelect/SimpleSelect.cpp src/Common/Commons.cpp src/Common/Commons.h src/Stack/Stack.cpp src/Stack/Stack.h src/Stack/testStack.cpp src/Sort/BubbleSort/testBubbleSort.cpp src/Sort/Sort.cpp src/Sort/Sort.h)
add_executable(DataStructures
        ${SOURCE_FILES}
        main.cpp)
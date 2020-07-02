cmake_minimum_required(VERSION 3.16)
project(DataStructures)
set(CMAKE_CXX_STANDARD 14)
SET(SOURCE_FILES
        src/DS/Sort/Swap/BubbleSort/BubbleSort.cpp src/DS/Sort/Select/SimpleSelect/SimpleSelect.cpp src/Common/Commons.cpp src/Common/Commons.h src/DS/Stack/Stack.cpp src/DS/Stack/Stack.h src/Test/Stack/testStack.cpp src/Test/Sort/testSort.cpp src/DS/Sort/Sort.cpp src/DS/Sort/Sort.h src/Test/Sort/testSort.h src/Test/Stack/testStack.h)
add_executable(DataStructures
        ${SOURCE_FILES}
        main.cpp)
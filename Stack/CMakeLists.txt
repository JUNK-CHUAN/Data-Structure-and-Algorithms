cmake_minimum_required(VERSION 3.10)
project(Stack)

set(CMAKE_CXX_STANDARD 11)

add_executable(Stack main.cpp Link.h Stack.h AStack.h LStack.h)
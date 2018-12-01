cmake_minimum_required(VERSION 3.10)
project(LList_CList)

set(CMAKE_CXX_STANDARD 11)

add_executable(LList_CList main.cpp List.h Link.h LList.h CList.h AList.h)
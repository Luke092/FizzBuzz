cmake_minimum_required(VERSION 3.28)
project(c C)

set(CMAKE_C_STANDARD 11)

add_executable(c main.c
        LinkedList.c
        LinkedList.h)

target_link_libraries(c m)
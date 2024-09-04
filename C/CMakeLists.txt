cmake_minimum_required(VERSION 3.29)
project(C)

set(CMAKE_CXX_STANDARD 14)

add_executable(C
    C.cbp
        main.c
        remove.c
        remove.h.c)

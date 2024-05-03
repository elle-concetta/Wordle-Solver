cmake_minimum_required(VERSION 3.26)
project(solve C)

set(CMAKE_C_STANDARD 23)

add_executable(solve solve.c btree.c hashset.c)

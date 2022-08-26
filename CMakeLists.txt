cmake_minimum_required(VERSION 3.9)

project(practiceProject)

add_executable(program program.cpp)

enable_testing()
add_test(NAME testUno COMMAND program)
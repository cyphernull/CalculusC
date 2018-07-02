cmake_minimum_required(VERSION 3.10)
project(CalculusC C)

set(CMAKE_C_STANDARD 11)

add_executable(CalculusC main.c calculus.c calculus.h)
cmake_minimum_required(VERSION 3.13)
project(CircularDoubleLinkedList C)

set(CMAKE_C_STANDARD 11)

add_executable(CircularDoubleLinkedList main.c include/CircularDoubleLinkedList.c include/CircularDoubleLinkedList.h)
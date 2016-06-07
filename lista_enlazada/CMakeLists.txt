cmake_minimum_required(VERSION 3.5)
project(lista_enlazada)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp lista.cpp lista.h nodo.cpp nodo.h)
add_executable(lista_enlazada ${SOURCE_FILES} lista.cpp lista.h nodo.cpp nodo.h)
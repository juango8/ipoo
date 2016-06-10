cmake_minimum_required(VERSION 3.5)
project(colas_pilas)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp nodo.cpp nodo.h pila.cpp pila.h cola.cpp cola.h)
add_executable(colas_pilas ${SOURCE_FILES} nodo.cpp nodo.h pila.cpp pila.h cola.cpp cola.h)
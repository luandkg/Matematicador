cmake_minimum_required(VERSION 4.0)
project(Matematicador)

set(CMAKE_CXX_STANDARD 20)

add_executable(Matematicador
        main.cpp
        progressao/ProgressaoAritmetica.cpp
        progressao/ProgressaoGeometrica.cpp
        progressao/Progressao.h)
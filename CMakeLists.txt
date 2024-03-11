cmake_minimum_required(VERSION 3.25)
project(TemaIA)

set(CMAKE_CXX_STANDARD 14)

include_directories(TemaIA)

add_executable(TemaIA
        TemaIA/Laptop.cpp
        TemaIA/Laptop.h
        TemaIA/Mouse.cpp
        TemaIA/Mouse.h
        TemaIA/Object.cpp
        TemaIA/Object.h
        TemaIA/Product.cpp
        TemaIA/Product.h
        TemaIA/Review.cpp
        TemaIA/Review.h
        TemaIA/TemaIA.cpp
        TemaIA/WirelessMouse.cpp
        TemaIA/WirelessMouse.h)

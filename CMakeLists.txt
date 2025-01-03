cmake_minimum_required(VERSION 3.29)
project(EX_CPP1)

set(CMAKE_CXX_STANDARD 20)

add_executable(EX_CPP1 main.cpp
        Entity.cpp
        Entity.h
        Room.cpp
        Room.h
        Game.cpp
        Game.h)

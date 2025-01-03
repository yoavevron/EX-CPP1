cmake_minimum_required(VERSION 3.29)
project(v11)

set(CMAKE_CXX_STANDARD 11)

add_executable(v11 main.cpp
        Entity.cpp
        Entity.h
        Room.cpp
        Room.h
        Game.cpp
        Game.h
        Check.cpp
        Check.h)

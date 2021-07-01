cmake_minimum_required(VERSION 3.5)
project(7)


set(CMAKE_CXX_FLAGS "-std=c++17")

add_executable(7 main.cpp Draw.h Player.h Menus.h Save_player.h Draw.cpp Menus.cpp Player.cpp Save_player.cpp New.cpp New.h)
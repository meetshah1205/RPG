cmake_minimum_required(VERSION 3.31)
project(Cpp_RPG_Game)

set(CMAKE_CXX_STANDARD 20)

add_executable(Cpp_RPG_Game main.cpp
        "Headers/hp.h"
        "PlayerClasses/warrior.h"
        "Headers/statblock.h"
        "Headers/stattypes.h"
        PlayerClasses/wizard.h
        PlayerClasses/cleric.h
        PlayerClasses/rogue.h
        Headers/allclasses.h)

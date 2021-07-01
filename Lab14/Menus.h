//
// Created by szymon on 15.04.2021.
//

#ifndef INC_7_MENUS_H
#define INC_7_MENUS_H
#include <vector>
#include <string>
#include <iostream>
#include "Player.h"
#include "Find_by_name.h"
using namespace std;

const vector < string > main_menu =
        {
        "Create character",
        "Edit character",
        "Load character and continue",
        "Create enemies",
        "Battle",
        "Exit"
        };

const vector < string > fight_menu =
        {
                "Automatic",
                "Manual",
                "Exit"
        };

const vector < string > fight_menu2 =
        {
                "Physical Attack",
                "Perswade",
                "Outsmart"
        };





void print_menu(vector < string > options);

void print_battle(int player_ID);

#endif //INC_7_MENUS_H

//
// Created by szymon on 15.04.2021.
//

#ifndef INC_7_MENUS_H
#define INC_7_MENUS_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;

const vector < string > main_menu =
        {
        "Create character",
        "Edit character",
        "Load character and continue",
        "Create enemies",
        "Exit"
        };




void print_menu(vector < string > options);


#endif //INC_7_MENUS_H

//
// Created by szymo on 20.04.2021.
//
#include "Menus.h"


void print_menu(vector < string > options) {
    for (int i = 0; i < options.size(); i++) {
        std::cout << i + 1 << " - " << options[i] << "\n";
    }
    std::cout << flush;
}

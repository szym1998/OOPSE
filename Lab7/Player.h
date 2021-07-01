//
// Created by szymon on 14.04.2021.
//

#ifndef INC_7_PLEAYER_H
#define INC_7_PLEAYER_H

#include <string>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "Save_player.h"
#include "Draw.h"

using namespace std;

class Character_variables
{
public:
    std::string type;
    std::string name;
    int level;
    double stamina;
    double health;
    double attack;
    double inteligence;
    int ID;


    Character_variables(int ID, string a1, string a2, int b1, int b2, int b3, int b4, int b5)

    {

        type = a1;
        name = a2;
        level = b1;
        stamina = b2;
        health = b3;
        attack = b4;
        inteligence = b5;


        /*if (type == "klingon")
        {
            attack = attack*1.15;
        }
        if (type == "vulcan")
        {
            inteligence = inteligence*1.2;
        }
        if (type == "ferengi")
        {
            stamina = stamina*1.05;
            attack = attack*1.05;
            inteligence = inteligence*1.05;
        }*/
    }
};

void enter_stats(string type, int level, int ID);

void create_player(int player_id);


#endif //INC_7_PLEAYER_H

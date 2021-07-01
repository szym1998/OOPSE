//
// Created by szymon on 14.04.2021.
//

#ifndef INC_7_PLEAYER_H
#define INC_7_PLEAYER_H

#include <string>
#include <stdlib.h>
#include <iostream>
#include <unistd.h>
#include "Draw.h"
#include <fstream>
#include <vector>
#include <utility>
#include "read_csv.h"
#include <cstdlib>
#include <ctime>

using namespace std;

class Character_variables
{
public:
    friend class Mechanic;
    friend class Captain;
    friend class Lieutenant;
    friend class Ensign;

    std::string type;
    std::string name;
    int level;
    double stamina;
    double health;
    double attack;
    double inteligence;
    int ID;
    int Bonus[4]{0,0,0,0};
    std::string profession = "Unknown";

    Character_variables() = default;
    Character_variables(int ID, string a1, string a2, int b1, int b2, int b3, int b4, int b5);


    void Save(int opt);


};

class Monsters : public Character_variables
{
public:
    void Monsters_create(int m_ID, int m_level);
    //Monsters(int ID, string a1, string a2, int b1, int b2, int b3, int b4, int b5);
};



class Mechanic
{
public:
    void Mechanic_add(Character_variables & d);
};

class Captain
{
public:
    void Captain_add(Character_variables & d);

};

class Lieutenant
{
public:
    void Lieutenant_add(Character_variables & d);

};

class Ensign
{
public:
    void Ensign_add(Character_variables & d);

};
void enter_stats(string type, int level, int ID, int opt);

void create_player(int player_id, int opt);


#endif //INC_7_PLEAYER_H

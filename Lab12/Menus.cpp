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


void print_battle(int player_ID)
{
    std::vector <int> IDs2;
    std::string name = "NULL";
    int stamina;
    int health;
    int attack;
    int inteligence;
    int xp_p;

    int sw2;
    std::vector < std::vector < std::string > > data = read_csv(std::to_string(player_ID)+".csv",0);
    std::string race = data[0][1];
    std::string profession = data[7][1];

    name = data[1][1];
    stamina = std::stoi(data[3][1]);
    health = std::stoi(data[4][1]);
    attack = std::stoi(data[5][1]);
    inteligence = std::stoi(data[6][1]);
    xp_p = std::stoi(data[8][1]);

    int level = std::stoi(data[2][1]);
    if (profession == "Mechanic"){sw2=1;}
    if (profession == "Captain"){sw2=2;}
    if (profession == "Lieutenant"){sw2=3;}
    if (profession == "Ensign"){sw2=4;}

    Character_variables player(player_ID, race, name, level, stamina, health, attack, inteligence, xp_p);
    Mechanic Me;
    Captain Ca;
    Lieutenant Li;
    Ensign En;
    switch(sw2)
    {
        case 1:
            Me.addPoints(player);
            break;
        case 2:
            Ca.addPoints(player);
            break;
        case 3:
            Li.addPoints(player);
            break;
        case 4:
            En.addPoints(player);
            break;
    }
    system("clear");
    std::cout << "Name        -- " << player.name << "\n"; //0 space
    std::cout << "Level       -- " << player.level<< "\n";
    std::cout << "Stamina     -- " << player.stamina<< "  +" << player.Bonus[0] << "\n";
    std::cout << "Health      -- " << player.health<< "  +" << player.Bonus[1] << "\n";
    std::cout << "Attack      -- " << player.attack<< "  +" << player.Bonus[2] << "\n";
    std::cout << "Inteligence -- " << player.inteligence<< "  +" << player.Bonus[3] << "\n";
    std::cout << "--------------------------------------------------------------------------------------------------" << "\n";

    IDs2 = list_f(1);
    std::sort (IDs2.begin(), IDs2.end());


    for (int i = 1; i < IDs2.size(); i++)
    {
        std::vector < std::vector < std::string > > data2 = read_csv(std::to_string(IDs2[i])+".csv",1);
        std::cout << "ID          -- " << IDs2[i] << "\n";
        std::cout << "Race        -- " << data2[0][1]<< "\n";
        std::cout << "Level       -- " << data2[2][1]<< "\n";
        std::cout << "Stamina     -- " << data2[3][1]<< "\n";
        std::cout << "Health      -- " << data2[4][1]<< "\n";
        std::cout << "Attack      -- " << data2[5][1]<< "\n";
        std::cout << "Inteligence -- " << data2[6][1]<< "\n";
        std::cout << "XP -- " << data2[8][1]<< "\n";
        std::cout << "\n\n\n";
    }



}
//
// Created by szymon on 20.04.2021.
//
#include "Player.h"

void enter_stats(string type, int level, int ID)
{

    std::string name;
    //level = 0;
    double stamina = 0;
    double health = 0;
    double attack = 0;
    double inteligence = 0;
    //int input;

    std::string cont = "N";
    while (cont == "N" || cont == "n")
    {
        int points = level*10;
        std::string rep = "N";
        for (int i = 0; i < 6; i++)
        {
            system("clear");
            std::cout << "Name        -- " << name << "\n"; //0 space
            std::cout << "Level       -- " << level<< "\n";
            std::cout << "Stamina     -- " << stamina<< "\n";
            std::cout << "Health      -- " << health<< "\n";
            std::cout << "Attack      -- " << attack<< "\n";
            std::cout << "Inteligence -- " << inteligence<< "\n"; //5 space
            switch (i)
            {
                case 0:
                    std::cout << "Enter name:  ";
                    cin >> name;
                    break;
                case 1:
                    do
                    {
                        std::cout << "Points: " << points << "\n";
                        std::cout << "Enter Stamina:  ";
                        cin >> stamina;
                        if (stamina > points)
                        {
                            std::cout << "\n";
                            std::cout << "Not enough points" << "\n";
                        }
                    } while (stamina > points);
                    points = points-stamina;
                    break;
                case 2:
                    do
                    {
                        std::cout << "Points: " << points << "\n";
                        std::cout << "Enter Health:  ";
                        cin >> health;
                        if (health > points)
                        {
                            std::cout << "\n";
                            std::cout << "Not enough points" << "\n";
                        }
                    } while (health > points);
                    points = points-health;

                    break;
                case 3:
                    do
                    {
                        std::cout << "Points: " << points << "\n";
                        std::cout << "Enter Attack:  ";
                        cin >> attack;
                        if (attack > points)
                        {
                            std::cout << "\n";
                            std::cout << "Not enough points" << "\n";
                        }
                    } while (attack > points);
                    points = points-attack;
                    break;
                case 4:
                    do
                    {
                        std::cout << "Points: " << points << "\n";
                        std::cout << "Enter Inteligence:  ";
                        cin >> inteligence;
                        if (inteligence > points)
                        {
                            std::cout << "\n";
                            std::cout << "Not enough points" << "\n";
                        }
                    } while (inteligence > points);
                    points = points-inteligence;
                    break;
            }


        }
        if (points > 0)
        {
            std::cout << "Points left:  " << points << "\n";
            std::cout << "Unused points will be lost, would you like to do it again?  Y/N :  ";
            cin >> rep;
            if (rep == "Y")
            {
                cont = "N";
            } else {cont = "Y";}

        }
        if (points <= 0)
        {
            std::cout << "Would you like to continue? Y/N : ";
            cin >> cont;
        }

    }


    Character_variables player(ID, type, name, level, stamina, health, attack, inteligence);
    Save(player.ID, player.type, player.name, player.level, player.stamina, player.health, player.attack, player.inteligence);
    std::cout << player.ID;
    std::cout << "Ty jebako";
    usleep(10000000);


}

void create_player(int player_id)
{
    string race;
    system("clear");
    draw_logo();
    std::cout << "Welcome to player creation menu" << "\n\n" << "You can chose from these 3 races:";
    draw_all();
    std::cout << "Enter race: ";
    cin >> race;
    int sw;
    if (race == "Vulcan" || race == "vulcan"){sw=1;}
    if (race == "Frengi" || race == "ferengi"){sw=2;}
    if (race == "Klingon" || race == "klingon"){sw=3;}
    switch(sw)
    {
        case (1):
            system("clear");
            draw_logo();
            draw_vulcan();
            enter_stats(race, 1, player_id);

            break;
        case (2):

            break;
        case (3):

            break;

    }

}
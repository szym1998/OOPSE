//
// Created by szymon on 20.04.2021.
//
#include "Player.h"


void enter_stats(string type, int level, int ID, int opt, int sw2)
{
    std::string name = "NULL";
    int stamina;
    int health;
    int attack;
    int inteligence;
    int xp_p;
    if (opt == 0)
    {
        stamina = 0;
        health = 0;
        attack = 0;
        inteligence = 0;
        xp_p = 5;
    }
    else {
        std::vector < std::vector < std::string > > data = read_csv(std::to_string(ID)+".csv", 0);
        name = data[1][1];
        xp_p = std::stoi(data[8][1]);

        stamina = std::stoi(data[3][1]);
        health = std::stoi(data[4][1]);
        attack = std::stoi(data[5][1]);
        inteligence = std::stoi(data[6][1]);
        xp_p = std::stoi(data[8][1]);

    }
    Character_variables player(ID, type, name, level, stamina, health, attack, inteligence, xp_p);
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

    std::string cont = "N";
    while (true)
    {
        int points = level*10;
        std::string rep = "N";
        if (opt == 0 || opt == 1)
        {
            for (int i = 0; i < 6; i++)
            {
                system("clear");
                std::cout << "Name        -- " << player.name << "\n"; //0 space
                std::cout << "Level       -- " << player.level<< "\n";
                std::cout << "Stamina     -- " << player.stamina<< "  +" << player.Bonus[0] << "\n";
                std::cout << "Health      -- " << player.health<< "  +" << player.Bonus[1] << "\n";
                std::cout << "Attack      -- " << player.attack<< "  +" << player.Bonus[2] << "\n";
                std::cout << "Inteligence -- " << player.inteligence<< "  +" << player.Bonus[3] << "\n";
                std::cout << "XP -- " << player.xp<< "\n";
                if(player.xp >= 20)
                {
                    std::cout << "    You Can Level UP!" << "\n";
                    std::cout << "1 - Yes level UP." << "\n";
                    std::cout << "2 - No level UP." << "\n";
                    int sw3 = 0;
                    cin >> sw3;
                    if(sw3 == 1)
                    {
                        player.level=player.level+1;
                        player.xp=player.xp-20;
                        points = points+10;
                    }

                }

                switch (i)
                {
                    case 0:
                        std::cout << "Enter name:  ";
                        cin >> player.name;
                        break;
                    case 1:
                        while(true)
                        {
                            std::cout << "Points: " << points << "\n";
                            std::cout << "Enter Stamina:  " << "\n";
                            cin >> player.stamina;
                            cin.eof();

                            if(player.stamina <= points & !cin.fail())
                            {
                                points = points-player.stamina;
                                break;

                            }
                            else
                            {
                                if(cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore();
                                    sleep(0.1);
                                }
                                std::cout << "Not enough points or bad entry" << "\n";
                                player.stamina = 0;

                            }
                        }
                        break;

                    case 2:
                        while(true)
                        {
                            std::cout << "Points: " << points << "\n";
                            std::cout << "Enter Health:  " << "\n";
                            cin >> player.health;
                            cin.eof();

                            if(player.health <= points & !cin.fail())
                            {
                                points = points-player.health;
                                break;

                            }
                            else
                            {
                                if(cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore();
                                    sleep(0.1);
                                }
                                std::cout << "Not enough points or bad entry" << "\n";
                                player.health = 0;

                            }
                        }

                        break;
                    case 3:
                        while(true)
                        {
                            std::cout << "Points: " << points << "\n";
                            std::cout << "Enter Attack:  " << "\n";
                            cin >> player.attack;
                            cin.eof();

                            if(player.attack <= points & !cin.fail())
                            {
                                points = points-player.attack;
                                break;

                            }
                            else
                            {
                                if(cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore();
                                    sleep(0.1);
                                }
                                std::cout << "Not enough points or bad entry" << "\n";
                                player.attack = 0;

                            }
                        }

                        break;
                    case 4:
                        while(true)
                        {
                            std::cout << "Points: " << points << "\n";
                            std::cout << "Enter Inteligence:  " << "\n";
                            cin >> player.inteligence;
                            cin.eof();

                            if(player.inteligence <= points & !cin.fail())
                            {
                                points = points-player.inteligence;
                                break;

                            }
                            else
                            {
                                if(cin.fail())
                                {
                                    cin.clear();
                                    cin.ignore();
                                    sleep(0.1);
                                }
                                std::cout << "Not enough points or bad entry" << "\n";
                                player.inteligence = 0;

                            }
                        }

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
                } else {break;}

            }
            if (points <= 0)
            {
                std::cout << "Would you like to continue? Y/N : ";
                cin >> cont;
                if (cont == "Y") {break;}
            }
        }
        else
        {
            system("clear");
            std::cout << "Name        -- " << player.name << "\n"; //0 space
            std::cout << "Level       -- " << player.level<< "\n";
            std::cout << "Stamina     -- " << player.stamina<< "  +" << player.Bonus[0] << "\n";
            std::cout << "Health      -- " << player.health<< "  +" << player.Bonus[1] << "\n";
            std::cout << "Attack      -- " << player.attack<< "  +" << player.Bonus[2] << "\n";
            std::cout << "Inteligence -- " << player.inteligence<< "  +" << player.Bonus[3] << "\n";
            std::cout << "XP          -- " << player.inteligence<< "  +" << player.Bonus[3] << "\n";
            std::cout << "Would you like to continue? Y/N : ";
            cin >> cont;
            if (cont == "Y") {break;}
        }


    }
    //Character_variables player(ID, type, name, level, stamina, health, attack, inteligence);


    player.Save(0);




}

void create_player(int player_id, int opt)
{
    int sw2 = 0;
    if (player_id != 0)
    {

        if (opt == 0)
        {
            while (true)
            {
                std::string race;
                std::system("clear");
                draw_logo();
                std::cout << "Welcome to player creation menu" << "\n\n" << "You can chose from these 3 races:";
                draw_all();
                std::cout << "Enter race: ";
                std::cin >> race;
                int sw = 0;

                if (race == "Vulcan" || race == "vulcan"){sw=1;}
                if (race == "Ferengi" || race == "ferengi"){sw=2;}
                if (race == "Klingon" || race == "klingon"){sw=3;}
                std::string profession;
                std::system("clear");
                std::cout << "Time to chose your profession" << "\n\n" << "You can chose from these 4:"<< "\n\n";
                std::cout << "1 - Mechanic ----> +1 Stamina || +3 Inteligence" << "\n";
                std::cout << "2 - Captain ----> +2 Inteligence || +2 Health" << "\n";
                std::cout << "3 - Lieutenant ----> +4 Health" << "\n";
                std::cout << "4 - Ensign ----> +3 Attack || +1 Stamina" << "\n";
                std::cin >> sw2;
                switch(sw)
                {
                    case (1):
                        std::system("clear");
                        draw_logo();
                        draw_vulcan();
                        enter_stats(race, 1, player_id, opt, sw2);

                        break;
                    case (2):
                        std::system("clear");
                        draw_logo();
                        draw_ferengi();
                        enter_stats(race, 1, player_id, opt, sw2);
                        break;
                    case (3):
                        std::system("clear");
                        draw_logo();
                        draw_klingon();
                        enter_stats(race, 1, player_id, opt, sw2);
                        break;
                    default:
                        std::cout << "Invalid" << "\n";
                        sleep(2);

                }
                break;
            }

        }
        else
        {
            std::vector < std::vector < std::string > > data = read_csv(std::to_string(player_id)+".csv",0);
            std::string race = data[0][1];
            std::string profession = data[7][1];
            int level = std::stoi(data[2][1]);
            if (profession == "Mechanic"){sw2=1;}
            if (profession == "Captain"){sw2=2;}
            if (profession == "Lieutenant"){sw2=3;}
            if (profession == "Ensign"){sw2=4;}

            enter_stats(race, level, player_id, opt, sw2);
        }
    }


}

Character_variables::Character_variables(int a0, std::string a1, std::string a2, int b1, int b2, int b3, int b4, int b5, int b6)
    {

        type = a1;
        name = a2;
        level = b1;
        stamina = b2;
        health = b3;
        attack = b4;
        inteligence = b5;
        ID = a0;
        xp = b6;

    }

void Monsters::Monsters_create(int m_ID2, int m_level2)
{
    int a[5];
    int sum = m_level2*10;
    int sum2 = m_level2*10;
    std::string m_type;
    std::string m_name = "Enemie";


    a[0] = rand() % ( sum + 1 );   sum -= a[0];
    a[1] = rand() % ( sum + 1 );   sum -= a[1];
    a[2] = rand() % ( sum + 1 );   sum -= a[2];
    a[3] = sum;
    int race = rand() % 3 + 1;

    switch(race)
    {
        case (1):
            m_type = "Vulcan";
            break;
        case (2):
            m_type = "Ferengi";
            break;
        case (3):
            m_type = "Klingon";
            break;
    }
    int xp_m;
    if (m_level2 == 1)
    {
        xp_m = rand() % 6 + 1;
    }
    else
    {
        xp_m = rand() % sum2 + sum2/2; //get random xp value
    }


    type = m_type;
    name = "Enemie";
    level = m_level2;
    stamina = a[0];
    health = a[1];
    attack = a[2];
    inteligence = a[3];
    ID = m_ID2;
    xp = xp_m;
}

void Character_variables::Save(int opt){
    std::string path;
    switch (opt)
    {
        case 0:
            path = "/home/imirgrp/bogdani/lab1/vending_machine/Lab12/cmake-build-debug/Character_storage/";
            break;
        case 1:
            path = "/home/imirgrp/bogdani/lab1/vending_machine/Lab12/cmake-build-debug/Enemie_storage/";
            break;
    }

    ofstream myFile(path + std::to_string(ID) + ".csv");
    // Send data to the stream

    myFile << "Race: " << ";" << type << "\n" << "Name: "<< ";" << name << "\n" << "Level: "<< ";" << level << "\n" << "Stamina: "<< ";" << stamina << "\n" << "Health: "<< ";" << health << "\n" << "Attack: "<< ";" << attack << "\n" <<"Inteligence: "<< ";" << inteligence << "\n" <<"Profession: "<< ";" << profession << "\n" <<"xp: "<< ";" << xp << "\n" <<"Bonus: "<< ";"<<Bonus[0] << ";" <<Bonus[1] << ";" <<Bonus[2] << ";" <<Bonus[3];
    myFile.close();
}

void Mechanic::addPoints(hero_monster_param & d) {
    d.Bonus[0] = 1;
    d.Bonus[1] = 2;
    d.Bonus[2] = 0;
    d.Bonus[3] = 2;

    d.profession = "Mechanic";
}

void Captain::addPoints(hero_monster_param & d) {
    d.Bonus[0] = 0;
    d.Bonus[1] = 2;
    d.Bonus[2] = 0;
    d.Bonus[3] = 3;
    d.profession = "Captain";
}

void Lieutenant::addPoints(hero_monster_param & d) {
    d.Bonus[0] = 3;
    d.Bonus[1] = 1;
    d.Bonus[2] = 0;
    d.Bonus[3] = 1;
    d.profession = "Lieutenant";
}

void Ensign::addPoints(hero_monster_param & d) {
    d.Bonus[0] = 1;
    d.Bonus[1] = 0;
    d.Bonus[2] = 3;
    d.Bonus[3] = 0;
    d.profession = "Ensign";
}
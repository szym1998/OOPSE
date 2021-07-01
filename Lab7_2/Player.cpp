//
// Created by szymon on 20.04.2021.
//
#include "Player.h"


void enter_stats(string type, int level, int ID, int opt, int sw2)
{
    std::string name = "NULL";
    double stamina;
    double health;
    double attack;
    double inteligence;
    if (opt == 0)
    {
        stamina = 0;
        health = 0;
        attack = 0;
        inteligence = 0;
    }
    else {
        std::vector < std::vector < std::string > > data = read_csv(std::to_string(ID)+".csv");
        name = data[1][1];

        stamina = atof(data[3][1].c_str());
        health = atof(data[4][1].c_str());
        attack = atof(data[5][1].c_str());
        inteligence = atof(data[6][1].c_str());

    }
    Character_variables player(ID, type, name, level, stamina, health, attack, inteligence);
    switch(sw2)
    {
        case 1:
            Mechanic Me;
            Me.Mechanic_add(player);
            break;
        case 2:
            Captain Ca;
            Ca.Captain_add(player);
            break;
        case 3:
            Lieutenant Li;
            Li.Lieutenant_add(player);
            break;
        case 4:
            Ensign En;
            En.Ensign_add(player);
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
                std::cout << "Stamina     -- " << player.stamina<< "  +" << player.Bonus[1] << "\n";
                std::cout << "Health      -- " << player.health<< "  +" << player.Bonus[2] << "\n";
                std::cout << "Attack      -- " << player.attack<< "  +" << player.Bonus[3] << "\n";
                std::cout << "Inteligence -- " << player.inteligence<< "  +" << player.Bonus[4] << "\n";
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
            std::cout << "Stamina     -- " << player.stamina<< "  +" << player.Bonus[1] << "\n";
            std::cout << "Health      -- " << player.health<< "  +" << player.Bonus[2] << "\n";
            std::cout << "Attack      -- " << player.attack<< "  +" << player.Bonus[3] << "\n";
            std::cout << "Inteligence -- " << player.inteligence<< "  +" << player.Bonus[4] << "\n";
            std::cout << "Would you like to continue? Y/N : ";
            cin >> cont;
            if (cont == "Y") {break;}
        }


    }
    //Character_variables player(ID, type, name, level, stamina, health, attack, inteligence);


    player.Save();




}

void create_player(int player_id, int opt)
{
    int sw2 = 0;

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
            int sw;

            if (race == "Vulcan" || race == "vulcan"){sw=1;}
            if (race == "Frengi" || race == "ferengi"){sw=2;}
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
        std::vector < std::vector < std::string > > data = read_csv(std::to_string(player_id)+".csv");
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

Character_variables::Character_variables(int a0, std::string a1, std::string a2, int b1, int b2, int b3, int b4, int b5)
    {

        type = a1;
        name = a2;
        level = b1;
        stamina = b2;
        health = b3;
        attack = b4;
        inteligence = b5;
        ID = a0;

    }

void Character_variables::Save(){

    ofstream myFile(std::to_string(ID)+".csv");
    // Send data to the stream

    myFile << "Race: " << ";" << type << "\n" << "Name: "<< ";" << name << "\n" << "Level: "<< ";" << level << "\n" << "Stamina: "<< ";" << stamina << "\n" << "Health: "<< ";" << health << "\n" << "Attack: "<< ";" << attack << "\n" <<"Inteligence: "<< ";" << inteligence << "\n" <<"Profession: "<< ";" << profession << "\n" <<"Bonus: "<< ";"<<Bonus[1] << ";" << ";"<<Bonus[2] << ";" << ";"<<Bonus[3] << ";" << ";"<<Bonus[4];
    myFile.close();
}

void Mechanic::Mechanic_add(Character_variables & d) {
    d.Bonus[4] = 3;
    d.Bonus[1] = 1;
    d.profession = "Mechanic";
}

void Captain::Captain_add(Character_variables & d) {
    d.Bonus[4] = 2;
    d.Bonus[2] = 2;
    d.profession = "Captain";
}

void Lieutenant::Lieutenant_add(Character_variables & d) {
    d.Bonus[2] = 4;
    //d.Bonus[4] = 1;
    d.profession = "Lieutenant";
}

void Ensign::Ensign_add(Character_variables & d) {
    d.Bonus[3] = 3;
    d.Bonus[1] = 1;
    d.profession = "Ensign";
}
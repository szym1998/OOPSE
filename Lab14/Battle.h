//
// Created by szymon on 02.06.2021.
//
#include <vector>
#include <string>
#include "read_csv.h"
#include "Menus.h"

#include <iostream>
#include <fstream>
#include <cstdio>
void battle_history(int gained_xp, int ID);
template <class points>
        class Battle {
            points var;
        public:
            int start_battle(int player_ID) {
                //Attack selection
                while (true) {
                    print_battle(player_ID);
                    std::cout << "Chose Monster ID to battle, type 'pussy' to run away." <<"\n";
                    std:string monster_ID;
                    cin >> monster_ID;

                    if(monster_ID == "pussy")
                    {
                        break;
                    }



                    std::vector<std::vector<std::string> > player_data = read_csv(std::to_string(player_ID) + ".csv", 0);
                    std::vector<std::vector<std::string> > monster_data = read_csv(monster_ID + ".csv", 1);

                    std::vector<int> player_vec;
                    std::vector<int> monster_vec;
                    std::vector<int> advantage;



                    for (int i = 3; i <= 6; i++)
                    {


                        player_vec.push_back(std::stoi(player_data[i][1]));

                        monster_vec.push_back(std::stoi(monster_data[i][1]));

                        advantage.push_back(((player_vec[i-3])-(monster_vec[i-3])));

                    }


                    auto it = max_element(std::begin(advantage), std::end(advantage)); // index of best solution


                    // now some battle simulation code based on read stats


                    int player_points;
                    int monster_points;
                    system("clear");
                    std::cout << "Would you like automatic fight or manual?" << "\n";
                    print_menu(fight_menu);
                    int opp = 0;
                    int opp2 = 0;
                    cin >> opp;
                    if (opp == 3) {
                        break;
                        return 0;
                    }
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore();
                        //cout << "Invalid" << endl;
                    }
                    if (opp <= fight_menu.size()) {
                        switch(opp)
                        {
                            case 1: //Automatic
                                if(advantage[std::distance(advantage.begin(), it)]>0)
                                {
                                    std::cout << "You Win!" << "\n";
                                    var = stoi(player_data[8][1])+stoi(monster_data[8][1]);
                                    //sleep(4);
                                    //std::cout << var << "\n";
                                }
                                else
                                {
                                    std::cout << "You Lose :(" << "\n";
                                    var = 0;
                                }
                                break;

                            case 2: //Manual
                                system("clear");
                                print_menu(fight_menu2);
                                cin >> opp2;
                                switch(opp2)
                                {
                                    case 1:
                                        if(advantage[2]>0)
                                        {
                                            std::cout << "You Win!" << "\n";
                                            var = stoi(player_data[8][1])+stoi(monster_data[8][1]);
                                        }
                                        else
                                        {
                                            std::cout << "You Lose :(" << "\n";
                                            var = 0;
                                        }
                                        break;
                                    case 2:
                                        if(advantage[1]>0)
                                        {
                                            std::cout << "You Win!" << "\n";
                                            var = stoi(player_data[8][1])+stoi(monster_data[8][1]);
                                        }
                                        else
                                        {
                                            std::cout << "You Lose :(" << "\n";
                                            var = 0;
                                        }
                                        break;
                                    case 3:
                                        if(advantage[3]>0)
                                        {
                                            std::cout << "You Win!" << "\n";
                                            var = stoi(player_data[8][1])+stoi(monster_data[8][1]);
                                        }
                                        else
                                        {
                                            std::cout << "You Lose :(" << "\n";
                                            var = 0;
                                        }
                                        break;

                                }
                                break;
                        }

                    }
                    std::cout << "You gained    " << monster_data[8][1] << "XP" << "\n";
                    sleep(3);
                    if(var > 0)
                    {
                        //Enemie is killed now we delete enemie file and add xp to character, var is gained xp

                        std::string str = ("/home/imirgrp/bogdani/lab1/vending_machine/Lab14/cmake-build-debug/Enemie_storage/" + monster_ID + ".csv");
                        const char *cstr = str.c_str();
                        std::string str2 = ("/home/imirgrp/bogdani/lab1/vending_machine/Lab14/cmake-build-debug/Character_storage/" + std::to_string(player_ID) + ".csv");
                        const char *cstr2 = str2.c_str();
                        //std::cout << cstr << "\n";
                        //sleep(5);
                        std::remove( cstr );
                        std::remove( cstr2 );
                        ///player_data; tam jest wszystko z playera
                        int sw2;
                        std::string profession = player_data[7][1];
                        if (profession == "Mechanic"){sw2=1;}
                        if (profession == "Captain"){sw2=2;}
                        if (profession == "Lieutenant"){sw2=3;}
                        if (profession == "Ensign"){sw2=4;}
                        Character_variables player(player_ID, player_data[0][1], player_data[1][1], stoi(player_data[2][1]), stoi(player_data[3][1]), stoi(player_data[4][1]), stoi(player_data[5][1]), stoi(player_data[6][1]), var);
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
                        player.Save(0);
                        battle_history(stoi(monster_data[8][1]), player_ID);
                    }
                    else
                    {
                        ///player_data; tam jest wszystko z playera
                        int sw2;
                        std::string profession = player_data[7][1];
                        if (profession == "Mechanic"){sw2=1;}
                        if (profession == "Captain"){sw2=2;}
                        if (profession == "Lieutenant"){sw2=3;}
                        if (profession == "Ensign"){sw2=4;}
                        Character_variables player(player_ID, player_data[0][1], player_data[1][1], stoi(player_data[2][1]), stoi(player_data[3][1]), stoi(player_data[4][1]), stoi(player_data[5][1]), stoi(player_data[6][1]), 0);
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

                        player.Save(0);

                        battle_history(stoi(monster_data[8][1]), player_ID);

                    }


                }


            }
        };












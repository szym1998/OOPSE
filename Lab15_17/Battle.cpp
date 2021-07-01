//
// Created by szymon on 02.06.2021.
//

#include "Battle.h"


void battle_history(int gained_xp, int ID)
{
    int opp21 = 0;
    std::vector <int> IDs;
    std::vector <int> xps;
    IDs = list_f(2);
    std::sort (IDs.begin(), IDs.end());
    for (int i = 0; i < IDs.size(); i++)
    {
        std::cout << IDs[i] << "\n";
    }
    //sleep(4);

    std::string str = ("/home/imirgrp/bogdani/lab1/vending_machine/Lab15_17/cmake-build-debug/Battle_history/" + std::to_string(ID) + ".csv");
    const char *cstr = str.c_str();
    for (int i = 1; i <= IDs.size(); i++)
    {
        std::sort (IDs.begin(), IDs.end());

        if(ID == IDs[i])
        {
            int num;
            std::cout << ID <<"=  " << IDs[i] << "\n";
            opp21 = 0;
            //std::cout << "Found matching ID" << "\n";
            //sleep(2);
            std::vector<std::vector<std::string> > battle_data = read_csv(std::to_string(ID) + ".csv", 2);
            //Now delete previous file and than save new
            if(battle_data.size() < 9){num = 0;}
            else{num = battle_data.size()-9;}
            std::remove( cstr );
            for (int i = num; i < battle_data.size(); i++)
            {
                xps.push_back(stoi(battle_data[i][0]));
            }
            xps.push_back(gained_xp);
            ofstream myFile(cstr);
            for (int i = 0; i < xps.size(); i++)
            {
                myFile << xps[i] <<"\n";
            }
            myFile.close();
            break;
        }
        else{opp21 = 1;}


    }
    if(opp21 == 1)
    {
        //std::cout << "This should happen now file for first time" << "\n";
        //sleep(2);
        ofstream myFile(cstr);
        myFile << gained_xp <<"\n";
        myFile.close();
    }







}
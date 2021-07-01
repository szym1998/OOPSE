//
// Created by szymo on 20.04.2021.
//
#include "Save_player.h"

void Save(int ID, string type, string name, int level, double stamina, double health, double attack, double intligence){

    std::ofstream myFile(std::to_string(ID));
    // Send data to the stream
    for (int i=0; i<7; i++)
    {
        myFile << "Race: " << ";" << type << "\n";
    }

    myFile.close();
}
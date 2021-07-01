//
// Created by szymon on 14.06.2021.
//

#include "Items.h"

void showlist(list <int> g) //do zmiany żeby pokazywało stackowane elementy
{
list <int> :: iterator it;
int num = 0;
for(it = g.begin(); it != g.end(); ++it)
{
    cout << Items[num] << ":   " << '\t' << *it;
    cout << '\n';
    num = num + 1;
}

}

void equipp(int ID, std::string dropped_item)
{
    if(dropped_item != "No Item" )
    {
        std::string path2;
        path2 = ("/home/imirgrp/bogdani/lab1/vending_machine/Lab15_17/cmake-build-debug/Inventory/" + std::to_string(ID)+".csv");
        const char *cstr = path2.c_str();
        std::vector < std::vector < std::string > > read_data = read_csv(std::to_string(ID)+".csv", 3);
        std::remove( cstr );
        std::list <string> items;

        for (int i = 0; i < read_data.size(); i++)
        {
            items.push_back(read_data[i][1]);
        }
        items.push_back(dropped_item);

        ofstream myFile2(path2);

        list <string> :: iterator it;

        for(it = items.begin(); it != items.end(); ++it)
        {
            myFile2 << *it <<"\n";
        }
        myFile2.close();




        std::cout << "Player with ID:  " << ID << "  was given item " << dropped_item <<"\n";
        sleep(2);
    }
    else
    {

        std::cout << "Enemy inventory empty" <<"\n";
        sleep(2);
    }

}

std::string dropp()
{
    int item = rand() % 5 + 1;
    std::string dropped_item;
    switch(item)
    {
        case (1):
            dropped_item = Items[0];
            break;
        case (2):
            dropped_item = Items[1];
            break;
        case (3):
            dropped_item = Items[2];
            break;
        case (4):
            dropped_item = Items[3];
            break;
        case (5):
            dropped_item = "No Item";
            break;
    }
    return dropped_item;
}
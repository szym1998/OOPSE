//
// Created by szymon on 28.04.2021.
//

#include "Find_by_name.h"


//using namespace std;

std::vector <int> list_f(int opt)
{
    std::vector<int> IDs = {0};
    DIR *di;
    char *ptr1,*ptr2;
    int retn;
    struct dirent *dir;
    switch (opt)
    {
        case 0:
            di = opendir("/home/imirgrp/bogdani/lab1/vending_machine/Lab15_17/cmake-build-debug/Character_storage");
            break;
        case 1:
            di = opendir("/home/imirgrp/bogdani/lab1/vending_machine/Lab15_17/cmake-build-debug/Enemie_storage");
            break;
        case 2:
            di = opendir("/home/imirgrp/bogdani/lab1/vending_machine/Lab15_17/cmake-build-debug/Battle_history");
            break;
        case 3:
            di = opendir("/home/imirgrp/bogdani/lab1/vending_machine/Lab15_17/cmake-build-debug/Inventory");
            break;
    }

    if (di)
    {

        while ((dir = readdir(di)) != NULL)
        {
            ptr1=strtok(dir->d_name,".");
            ptr2=strtok(NULL,".");
            if(ptr2!=NULL)
            {
                retn=strcmp(ptr2,"csv");
                if(retn==0)
                {
                    IDs.push_back(atoi(ptr1));
                }
            }

        }
        closedir(di);
    }

    return IDs;
}
int name_f(std::vector<int> IDs_v, std::string name2)
{
    int ID2 = 0;
    std::string name_read;
    for (int i = 1; i < IDs_v.size(); i++)
    {
        //std::cout << "this works aka before read data" << IDs_v[i] << "\n";
        std::vector < std::vector < std::string > > read_data = read_csv(std::to_string(IDs_v[i])+".csv", 0);
        name_read = read_data[1][1];
        if (boost::iequals(name2, name_read))
        {
            ID2 = IDs_v[i];

            break;
        }


    }
    if (ID2 == 0)
    {
        std::cout << "Character not found" << "\n";
    }
    return ID2;
}

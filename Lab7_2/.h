//
// Created by szymon on 27.04.2021.

#ifndef INC_7_FIND_NAME_H
#define INC_7_FIND_NAME_H
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <vector>
//#include "read_csv.h"
std::vector<string> ID_vec;
std::vector<std::string> find(std::string name)
{
    DIR *di;
    char *ptr1,*ptr2;
    int retn;
    struct dirent *dir;
    di = opendir("/home/imirgrp/bogdani/lab1/vending_machine/Lab7_2/cmake-build-debug"); //specify the directory name
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
                    ID_vec.push_back(ptr1);
                }
            }
        }
        closedir(di);
    }

    for (int i = 0; i < ID_vec.size(); i++)
    {
        //std::vector < std::vector < std::string > > data = read_csv(ID_vec[i]+".csv");
    }

}


#endif //INC_7_FIND_NAME_H

//
// Created by szymon on 28.04.2021.
//

#include "Find_by_name.h"


using namespace std;

std::vector <int> list_f()
{
    std::vector<int> IDs;
    DIR *di;
    char *ptr1,*ptr2;
    int retn;
    struct dirent *dir;
    di = opendir("/home/imirgrp/bogdani/lab1/vending_machine/Lab7_2"); //specify the directory name
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
            else
            {
                IDs.push_back(1);
            }
        }
        closedir(di);
    }

    return IDs;
}
int name_f(std::vector<int> IDs_v, std::string name2)
{
    int ID2;
    std::string name_read;
    for (int i = 0; i < IDs_v.size(); i++)
    {
        std::vector < std::vector < std::string > > read_data = read_csv(std::to_string(IDs_v[i])+".csv");
        name_read = read_data[1][1];
        //std::cout << name_read << "---" << IDs_v[i] << "\n";
        //int res = name2.compare(name_read);
        if (boost::iequals(name2, name_read))
        {
            ID2 = IDs_v[i];
            //std::cout << ID2 << "\n";
        }

    }
    return ID2;
}

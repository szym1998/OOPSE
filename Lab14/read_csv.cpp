//
// Created by szymon on 28.04.2021.
//

#include "read_csv.h"

std::vector<std::vector<std::string> > CSVReader::getData()
{
    std::ifstream file(fileName);
    std::vector<std::vector<std::string> > dataList;
    std::string line = "";
    // Iterate through each line and split the content using delimeter
    while (getline(file, line))
    {
        std::vector<std::string> vec;
        boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
        dataList.push_back(vec);
    }
    // Close the File
    file.close();
    return dataList;
}
std::vector<std::vector<std::string> > read_csv(std::string filename, int opt)
{
    std::string path;
    switch (opt)
    {
        case 0:
            path = "/home/imirgrp/bogdani/lab1/vending_machine/Lab14/cmake-build-debug/Character_storage/";
            break;
        case 1:
            path = "/home/imirgrp/bogdani/lab1/vending_machine/Lab14/cmake-build-debug/Enemie_storage/";
            break;
        case 2:
            path = "/home/imirgrp/bogdani/lab1/vending_machine/Lab14/cmake-build-debug/Battle_history/";
            break;
    }
    // Creating an object of CSVWriter
    CSVReader reader(path+filename);
    // Get the data from CSV File
    std::vector<std::vector<std::string> > dataList = reader.getData();
    // Print the content of row by row on screen






    return dataList;


}
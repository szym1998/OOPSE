//
// Created by szymon on 28.04.2021.
//

#ifndef INC_7_FIND_BY_NAME_H
#define INC_7_FIND_BY_NAME_H
#include <dirent.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include "read_csv.h"
#include <boost/algorithm/string.hpp>

std::vector <int>  list_f(int opt);
int name_f(std::vector <int> IDs_v, std::string name);
#endif //INC_7_FIND_BY_NAME_H

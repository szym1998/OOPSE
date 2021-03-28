#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "write_csv.h"
#include "read_csv.h"




const std::vector<std::string> options = {
    "Exit",
    "List products",
    "Reboot",
    "change password",    
};

int pass = 2137;


void print_drinks(auto& o, std::vector<auto> drinks, std::vector<auto> ammount)
{    
    for (int i=0; i<drinks.size(); i++)
        o << i+1 << " - " << drinks[i] << "\t\t" << ammount[i] <<"\n";
    o.flush();
}

std::vector<std::vector<std::string> > dataList = read_csv("initial_setup2.csv");
std::vector<std::string> drinks(dataList.size());
std::vector<int> ammount(dataList.size());
std::vector<int> replenish(dataList.size());
        







int main()
{
    for (int i = 0; i < dataList.size(); i++)
    {
        replace(drinks.begin(), drinks.end(), drinks[i], dataList[i][0]);     
            
    }
        
    for (int i = 0; i < dataList.size(); i++)
    {
        ammount[i] = std::stoi(dataList[i][1]);         
            
    }

    for (int i = 0; i < dataList.size(); i++)
    {
        replenish[i] = std::stoi(dataList[i][2]);         
            
    }
    for (int i = 0; i < ammount.size(); i++)
        {
            if (replenish[i] == 1)
            ammount[i] = 10;
            replenish[i] = 0;         
            
        }
    write_csv("initial_setup2.csv", drinks, ammount, replenish);
    while (true)
    {    
        std::vector<std::vector<std::string> > dataList = read_csv("initial_setup2.csv");
        std::vector<std::string> drinks(dataList.size());
        std::vector<int> ammount(dataList.size());
        std::vector<int> replenish(dataList.size());
        


        for (int i = 0; i < dataList.size(); i++)
        {
            replace(drinks.begin(), drinks.end(), drinks[i], dataList[i][0]);     
            
        }
        
        for (int i = 0; i < dataList.size(); i++)
        {
            ammount[i] = std::stoi(dataList[i][1]);         
            
        }

        for (int i = 0; i < dataList.size(); i++)
        {
            replenish[i] = std::stoi(dataList[i][2]);         
            
        }
        print_drinks(std::cout, drinks, ammount);

        std::cout << "What drink would you like? (1-" << drinks.size() << ")" << std::endl;
        size_t n;

        if (!(std::cin >> n) || !n || n > drinks.size() && n != 2137) {
            

            std::cerr << "Error. Choice was not valid" << std::endl;
            return EXIT_FAILURE;
            
        } else if (n == pass) {
            return EXIT_FAILURE;
        }

        

        // We now have a valid selection
        const std::string drink = drinks[n-1];
        std::cout << "You chose " << drink << "." << std::endl;
        int b = 0;

        do {
        std::cout << "What ammount would you like? you can choose from (0-" << ammount[n-1] << ")" << std::endl;
        
        
        if (!(std::cin >> b) || !b || b > ammount[n-1]) {
            std::cerr << "not enough stock" << std::endl;
            

        }
        }
        while (b > ammount[n-1]);
        // valid number now we stubtract from ammount vector

        ammount[n-1] = ammount[n-1]-b;
        
        system ("clear");

        for (int i = 0; i < ammount.size(); i++)
        {
            if (ammount[i] == 0)
            replenish[i] = 1;         
            
        }
        write_csv("initial_setup2.csv", drinks, ammount, replenish);
    
    }
}
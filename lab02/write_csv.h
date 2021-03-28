
#pragma once
#include <string>
#include <fstream>
#include <vector>
#include <utility> 





void write_csv(std::string filename, std::vector<auto> drinks, std::vector<auto> ammount, std::vector<auto> replenish){
   
    std::ofstream myFile(filename);
    
    // Send data to the stream
    for (int i=0; i<ammount.size(); i++)
    {
        myFile << drinks[i] << ";" << ammount[i] << ";" << replenish[i] <<"\n";
    }
    
    // Close the file
    myFile.close();
    
}


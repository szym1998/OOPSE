#pragma once
#include <string>
#include <fstream>
#include <vector>
#include <utility> 





void write_csv_pool(std::string filename, std::vector<auto> coins, std::vector<auto> coin_number){
   
    std::ofstream myFile(filename);
    
    // Send data to the stream
    for (int i=0; i<coins.size(); i++)
    {
        myFile << coins[i] << ";" << coin_number[i] <<"\n";
    }
    
    // Close the file
    myFile.close();
    
}


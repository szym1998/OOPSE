#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <numeric>
#include "write_csv.h"
#include "write_csv_pool.h"
#include "read_csv.h"
#include <unistd.h>
#include <algorithm>


const std::vector < std::string > options = {
  "Exit",
  "Change money pool",
  "Exit Program"
};

int pass = 2137;

//double money = 22.5;
class disp
{
public:
    void print_drinks(auto & o, std::vector < auto > drinks, std::vector < auto > ammount, std::vector < auto > price) {
        for (int i = 0; i < drinks.size(); i++)
            o << i + 1 << " - " << drinks[i] << "\t\t" << ammount[i] << "\t\t" << price[i] << "\n";
        o.flush();
    }

    void admin_panel(auto & o, std::vector < auto > options, double money) {
        for (int i = 0; i < options.size(); i++) {
            o << i + 1 << " - " << options[i] << "\n";
        }
        o << "Current ammount of money -->" << money << "PLN" << "\n";
        o.flush();
    }
};


std::vector < std::vector < std::string > > dataList = read_csv("initial_setup2.csv");
std::vector < std::string > drinks(dataList.size() - 1);
std::vector < int > ammount(dataList.size() - 1);
std::vector < int > replenish(dataList.size() - 1);
std::vector < double > price(dataList.size() - 1);

std::vector < std::vector < std::string > > dataList_coin = read_csv("cash_pool.csv");
std::vector < double > coin_component(6);
std::vector < double > coins = {
  5,
  2,
  1,
  0.5,
  0.2,
  0.1
};
std::vector < int > coin_number(6);

double money = 0;

int main() {
    disp obj;

  for (int i = 0; i < dataList_coin.size(); i++) {
    coin_number[i] = std::stoi(dataList_coin[i][1]);
    coin_component[i] = coins[i] * coin_number[i];

  }
  int* ptr = &coin_number[0];
  money = std::accumulate(coin_component.begin(), coin_component.end(), 0.0);

  for (int i = 0; i < dataList.size() - 1; i++) {
    replace(drinks.begin(), drinks.end(), drinks[i], dataList[i][0]);
    ammount[i] = std::stoi(dataList[i][1]);
    replenish[i] = std::stoi(dataList[i][2]);
    price[i] = atof(dataList[i][3].c_str());
    if (replenish[i] == 1) {
      ammount[i] = 10;
      replenish[i] = 0;
    }
  }

  write_csv("initial_setup2.csv", drinks, ammount, replenish, price, money);
  while (true) {

    

    std::vector < std::vector < std::string > > dataList = read_csv("initial_setup2.csv");
    std::vector < std::string > drinks(dataList.size() - 1);
    std::vector < int > ammount(dataList.size() - 1);
    std::vector < int > replenish(dataList.size() - 1);
    std::vector < double > price(dataList.size() - 1);

    for (int i = 0; i < dataList.size() - 1; i++) {
      replace(drinks.begin(), drinks.end(), drinks[i], dataList[i][0]);
      ammount[i] = std::stoi(dataList[i][1]);
      replenish[i] = std::stoi(dataList[i][2]);
      price[i] = atof(dataList[i][3].c_str());
    }
    int n = drinks.size() + 1;
    while (n > drinks.size()) {

      std::vector < std::vector < std::string > > dataList_coin = read_csv("cash_pool.csv");
      std::vector < double > coin_component(6);
      std::vector < double > coins = {
        5,
        2,
        1,
        0.5,
        0.2,
        0.1
      };
      std::vector < int > coin_number(6);
      
      

      for (int i = 0; i < dataList_coin.size(); i++) {
        coin_number[i] = std::stoi(dataList_coin[i][1]);
        coin_component[i] = coins[i] * coin_number[i];
      }
      int* ptr = &coin_number[0];
      money = std::accumulate(coin_component.begin(), coin_component.end(), 0.0);
      system("clear");
      obj.print_drinks(std::cout, drinks, ammount, price);

      std::cout << "What drink would you like? (1-" << drinks.size() << ")" << std::endl;

      if (!(std::cin >> n) || !n || n > drinks.size() && n != pass) {

        std::cerr << "Error. Choice was not valid" << std::endl;
        return EXIT_FAILURE;

      } else if (n == pass) {

        system("clear");
        obj.admin_panel(std::cout, options, money);
        std::cout << "chose option (1-" << options.size() << ")" << std::endl;
        size_t m;
        std::cin >> m;
        if (m == 1) {
          std::cout << "Exiting" << std::endl;
        }
        if (m == 2) {
          system("clear");
          std::cout << "Please enter ammount of coins start from 5 end on 0.1" << std::endl;
          std::cout << "Enter 5s --";
          std::cin >> coin_number[0];
          std::cout << "\n" << "Enter 2s --";
          std::cin >> coin_number[1];
          std::cout << "\n" << "Enter 1s --";
          std::cin >> coin_number[2];
          std::cout << "\n" << "Enter 0.5s --";
          std::cin >> coin_number[3];
          std::cout << "\n" << "Enter 0.2s --";
          std::cin >> coin_number[4];
          std::cout << "\n" << "Enter 0.1s --";
          std::cin >> coin_number[5];
          write_csv_pool("cash_pool.csv", coins, coin_number);
        }
        if (m == 3) {
            system("clear");
            exit (EXIT_FAILURE);    
        }

      }
    }

    // We now have a valid selection
    const std::string drink = drinks[n - 1];
    std::cout << "You chose " << drink << "." << std::endl;
    int b = 0;

    do {
      std::cout << "What ammount would you like? you can choose from (0-" << ammount[n - 1] << ")" << std::endl;

      if (!(std::cin >> b) || !b || b > ammount[n - 1]) {
        std::cerr << "not enough stock" << std::endl;

      }
    }
    while (b > ammount[n - 1]);
    // valid number now we stubtract from ammount vector
    double to_pay = b * price[n-1];

    std::cout << "Please insert ammount ---->" << to_pay << "PLN" << std::endl;
    double bilon = 0.0;
    double payed_amm = 0.0;
    
    for (payed_amm = 0.0; payed_amm < to_pay; payed_amm = payed_amm + bilon) {
        std::cout << payed_amm << "PLN" << "\t\t" << "Payed out of" << "\t\t" << to_pay <<std::endl;      
        std::cin >> bilon;
        if (bilon == 5) {coin_number[0] = coin_number[0] + 1;}
        if (bilon == 2) {coin_number[1] = coin_number[1] + 1;}
        if (bilon == 1) {coin_number[2] = coin_number[2] + 1;}
        if (bilon == 0.5) {coin_number[3] = coin_number[3] + 1;}
        if (bilon == 0.2) {coin_number[4] = coin_number[4] + 1;}
        if (bilon == 0.1) {coin_number[5] = coin_number[5] + 1;}

    }
    //write_csv_pool("cash_pool.csv", coins, coin_number);
    double rest = payed_amm - to_pay;
    std::cout << "You payed " << payed_amm << "\t\t" << "Giving out" << "\t\t" << rest << std::endl;

    struct money_str { 
    double nomination;
    int how_much;
    int to_give;
    };

    std::vector<money_str> money_stru_vec(6);
    int *copy_ptr = ptr;
    for (int i = 0; i < 6; i++) {         
      money_stru_vec[i].nomination = coins[i];
      money_stru_vec[i].how_much = *ptr;
      ptr++;
    }

    

    std::sort(money_stru_vec.begin(), money_stru_vec.end(), [](auto const &a, auto const &b) { return a.how_much > b.how_much; });
    
    
  
   
    while(rest > 0){
      for (int i = 0; i < 6; i++)
      {
        if(rest >= money_stru_vec[i].nomination)
        {
          money_stru_vec[i].to_give = rest / money_stru_vec[i].nomination;
          if (money_stru_vec[i].to_give > 4)
          {
            money_stru_vec[i].to_give = 4;
          }
          if (money_stru_vec[i].to_give <= money_stru_vec[i].how_much)
          {
          rest -= money_stru_vec[i].nomination * money_stru_vec[i].to_give;
          }
          continue;
        }
      }
    }
    
    while(rest > 0){
      for (int i = 0; i < 6; i++) 
      {
        if(rest >= money_stru_vec[i].nomination){
        money_stru_vec[i].to_give = money_stru_vec[i].to_give + 1;
        rest -= money_stru_vec[i].nomination;
        continue;
      }
      } 
    }


    for (int i = 0; i < 6; i++) 
    { 
      std::cout << money_stru_vec[i].nomination << "\t\t" << money_stru_vec[i].to_give << std::endl;
    
    }
    
    for (int j = 0; j < 6; j++) {
      
        for (int i = 0; i < 6; i++) 
      { 
        if(money_stru_vec[i].nomination == coins[j]) {
          *copy_ptr = *copy_ptr - money_stru_vec[i].to_give;
        }
      
      }
      copy_ptr++;
    }
    write_csv_pool("cash_pool.csv", coins, coin_number);
    
    sleep(10);






    ammount[n - 1] = ammount[n - 1] - b;


    system("clear");

    for (int i = 0; i < ammount.size(); i++) {
      if (ammount[i] == 0)
        replenish[i] = 1;

    }
    write_csv("initial_setup2.csv", drinks, ammount, replenish, price, money);

  }
}
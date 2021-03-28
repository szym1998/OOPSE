#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

const std::vector<std::string> drinks = {
    "Coke",
    "Sprite",
    "Water",
    "Dumb Juice",
    "Apple Juice"
};

const std::vector<std::string> options = {
    "Exit",
    "List products",
    "Reboot",
    "change password",    
};


std::vector<int> ammount = {10,10,10,10,10};

int pass = 2137;


void print_drinks(auto& o, std::vector<auto> drinks, std::vector<auto> ammount)
{    
    for (int i=0; i<5; i++)
        o << i+1 << " - " << drinks[i] << "\t\t" << ammount[i] <<"\n";
    o.flush();
}


int admin_panel(auto& p)
{
    return EXIT_FAILURE;
}




int main()
{
    while (true) {  

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
    
    }
}
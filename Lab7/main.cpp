#include <iostream>
#include "Draw.h"
#include "Player.h"
#include <string>
#include "Menus.h"
#include "vector"
//#include <iomanip>

using namespace std;

int main() {
    system("clear");
    draw_logo();


    print_menu(main_menu);
    int n;
    if ((cin >> n) || n <= main_menu.size())
    {
        switch (n)
        {
            case 1:
                create_player(1);
                break;
            case 2:
                std::cout << "hello";
                break;
            case 3:
                std::cout << "hello";
                break;
        }
    }

    //draw_vulcan();
    //draw_ferengi();
    //draw_klingon();
    //draw_all();

    //Character_variables player1("vulcan", "spock", 1, 5, 6, 1, 6);


    //std::cout << "\n" << player1.inteligence << "\n";



    return 0;
}

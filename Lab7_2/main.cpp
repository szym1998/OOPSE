#include <iostream>
#include "Draw.h"
#include "Player.h"
#include <string>
#include "Menus.h"
#include <vector>
#include "Find_by_name.h"
#include <unistd.h>
#include <algorithm>

using namespace std;
int ID;
std::vector <int> IDs;
int main() {

    while (true)
    {

        system("clear");
        draw_logo();
        std::string name;
        print_menu(main_menu);
        int n = 0;
        cin >> n;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            //cout << "Invalid" << endl;

        }
        if (n <= main_menu.size())
        {
            switch (n)
            {
                case 1:
                    IDs = list_f();
                    std::sort (IDs.begin(), IDs.end());
                    ID = IDs[IDs.size()-1] +1;
                    create_player(ID, 0);
                    break;
                case 2:
                    std::cout << "Enter here Name:" << "\n";
                    cin >> name;
                    std::cout << "Loading haracter" << "\n";
                    IDs = list_f();
                    ID = name_f(IDs, name);
                    create_player(ID, 1);
                    break;
                case 3:
                    //IDs = find();
                    std::cout << "Enter here Name:" << "\n";
                    cin >> name;
                    std::cout << "Loading haracter" << "\n";
                    IDs = list_f();

                    ID = name_f(IDs, name);
                    //std::cout << ID << "\n";
                    //sleep(5);
                    create_player(ID, 2);
                    break;
                default:
                    std::cout << "Invalid" << "\n";
                    sleep(2);


            }
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

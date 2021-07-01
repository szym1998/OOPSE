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
int ID = 0;
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
        if (n == 5)
        {
            break;
            return 0;
        }
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            //cout << "Invalid" << endl;
        }
        if (n <= main_menu.size())
        {
            Monsters monster;

            switch (n)
            {
                case 1:
                    IDs = list_f(0);
                    std::sort (IDs.begin(), IDs.end());
                    ID = IDs[IDs.size()-1] +1;
                    create_player(ID, 0);
                    break;
                case 2:
                    std::cout << "Enter here Name:" << "\n";
                    cin >> name;
                    std::cout << "Loading Character" << "\n";
                    IDs = list_f(0);
                    std::sort (IDs.begin(), IDs.end());
                    ID = name_f(IDs, name);
                    //std::cout << ID << "\n";
                    //sleep(1);
                    create_player(ID, 1);
                    break;
                case 3:
                    //IDs = find();
                    std::cout << "Enter here Name:" << "\n";
                    cin >> name;
                    std::cout << "Loading haracter" << "\n";
                    IDs = list_f(0);
                    std::sort (IDs.begin(), IDs.end());
                    ID = name_f(IDs, name);
                    create_player(ID, 2);
                    break;
                case 4:
                    int enemie_level;
                    std::cout << "Enter enemies level" << "\n";
                    cin >> enemie_level;
                    IDs = list_f(1);
                    ID = IDs[IDs.size()-1] +1;
                    int i = IDs.size();
                    std::sort (IDs.begin(), IDs.end());

                    for (i; i < IDs.size()+5; ++i)
                    {
                        monster.Monsters_create(i, enemie_level);
                        monster.Save(1);
                    }
                    break;


                /*default:
                    std::cout << "Invalid" << "\n";
                    sleep(2);
                    break;*/


            }
        }

    }


}

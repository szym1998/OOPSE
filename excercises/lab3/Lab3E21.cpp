#include <iostream>
using namespace std;
char * tworzobiekt (void); /* tworzymy tu funkcje wywolywana bez
argumentow, ktora zwracac bedzie wskaznik typu char */
int main() {
char *wsk1, *wsk2, *wsk3;
cout << "Teraz nastapi akt stworzenia!\n";
wsk1 = tworzobiekt();
wsk2 = tworzobiekt();
wsk3 = tworzobiekt();
*wsk1 = âaâ;
*wsk2 = âbâ;
cout << "\nStworzylismy trzy nowe obiekty.\n"
<< "Do dwoch przypisano wartosci: "<< *wsk1 << *wsk2 << endl
<< "W trzecim widzimy same smieci: " << *wsk3 << endl;
delete wsk1;
delete wsk2;
delete wsk3;
return 0;
}
char * tworzobiekt (void) {
char *w;
cout << endl << "Tworze obiekt!" << endl;
w = new char;
return w;
}
#include <iostream>

using namespace std;

int main()
{
    char a ;
    cout << "Wpisz znak : " << endl;
    cin >> a ;
    if ( a >= 65 && a <= 90) cout << "Wprowadzono duza litera";
    if (a >= 97 && a <= 122) cout << "Wprowadzono mala litera";
    if (a >= 48 && a <= 57) cout << "Wprowadzono cyfre";
    return 0;
}

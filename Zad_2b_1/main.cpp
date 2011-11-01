#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    double m,n;
    cout << "Dodawanie - 1" << endl;
    cout << "Odejmowanie - 2" << endl;
    cout << "Mnozenie - 3" << endl;
    cout << "Dzielenie - 4" << endl;
    cout << "Wyjscie - 5" << endl;
    int x;
    cout << "Wybierz dzialanie : ";
    cin >> x;
    switch(x){
    case 1:
    cout << "Wybrales dodawanie" << endl;
    cout << "Wpisz dwie liczby" << endl;
    cin >> m;
    cin >> n;
    cout << "Wynik to " << m+n;
    break;
case 2:
    cout << "Wybrales odejmowanie" << endl;
    cout << "Wpisz dwie liczby" << endl;
    cin >> m;
    cin >> n;
    cout << "Wynik to " << m-n;
    break;
case 3:
    cout << "Wybrales mnozenie" << endl;
    cout << "Wpisz dwie liczby" << endl;
    cin >> m;
    cin >> n;
    cout << "Wynik to " << m*n;
    break;
case 4:
    cout << "Wybrales dzielenie" << endl;
    cout << "Wpisz dwie liczby" << endl;
    cin >> m;
    cin >> n;
    if (n!=0)

            cout << "Wynik to " << m/n;

    else
        cout << "Dzialanie niewykonalne";
    break;
    case 5:
    return 0;
    }


}

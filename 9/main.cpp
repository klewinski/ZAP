#include <iostream>

using namespace std;

int main()
{
    double x ;
    cout << "Wpisz liczbe :" << endl;
    cin >> x ;
    if (x == 0) cout << "Wynik nie istnieje";
    else cout << "Wynik : " << 1/x << endl;

}

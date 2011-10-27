#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x ;
    cout << "Wpisz liczbe : " << endl ;
    cin >> x ;
    if (x < 0) cout << "Wynik rowny 0";
    else cout << "Wynik : " << (((pow(x,0.5))+x)/(2+x));
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int m ;
    int n ;
    int k ;
    int l ;

    cout << "Napisz liczbe m : ";
    cin >> m ;
    cout << "Napisz liczbe n : ";
    cin >> n ;
    k= m % n ;
    cout << "Czesc calkowita : " << m/n << endl;
    cout << "Reszta  z dzielenia to : " ;
    cout << k ;


    return 0;
}

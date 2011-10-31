#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int k;
    do
    {

        cout << "Wpisz liczbe k, od 2 do 19:  " << endl;
        cin >> k;
    }
    while ((k<=1 || k>=20));
    cout << "Wpisales: " << k << endl;
    int spacje =k-1 ;
    int gwiazdki =1 ;

    for( int wiersz=1; wiersz<=k ; wiersz++)
    {


        for ( int lspacje=1; lspacje<=spacje ; lspacje++)
        {
            cout << " ";
        }
        for ( int lgwiazdki=1; lgwiazdki<=gwiazdki ; lgwiazdki++)
        {
            cout << "*";
        }

        cout << endl;
        spacje--;
        gwiazdki +=2;

    }

    return 0;
}

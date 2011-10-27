#include <iostream>

using namespace std;

int main()
{
    int k ;
    int m ;
    int n ;
    cout << "Wpisz liczbe k (taka ze, 1 < k < 20) : " << endl;
    cin >> k ;
    for( m=1 ; m<=k ; m++ )
    {
        for ( n=1 ; n<=m ; n++ )
            cout << " * ";
            cout << endl;
    }

}

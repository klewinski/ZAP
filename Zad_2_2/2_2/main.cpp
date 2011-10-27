#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    double y ;
    int i ;
    double potega ;
    double silnia ;
    double x ;
    double suma ;
    double suma2;
    cout << "Wpisz argument y : ";
    cin >> y;
    for ( x=0.1 ; x <=10 ; x=x+0.1)
    {
        if ( sin(x)>cos(x))
        {
            potega=1;
            silnia=1;
            suma=1;

           for ( i=1 ; i<=10 ; i++)
           {
               potega=potega*(x+y);
               silnia=silnia*i;
               suma=suma+(potega/silnia);

           }
           cout << "f(" << x << "," << y << ")= " << suma << endl;
        }
        else
        {
            suma2 = pow(x,5)+pow(x,3)*pow(y,2)+pow(y,4);
            cout << "f(" << x << "," << y << ")= " << suma2 << endl;

        }
    }


}

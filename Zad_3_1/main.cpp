#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int i;
    int suma=0, suma2=0, suma3=0;
    int b=0;
    int c=0;
    int array [2000];
    srand ( time(0) );
    for ( i=0; i<2000 ; i++)
    {
        array [i]=6000*(rand ( )/double(RAND_MAX))-3000;
    }
    // for (int x=0; x<2000; x++)
     // cout << x <<"    " << array [x]<<endl;
    for ( i=0; i<2000 ; i++)
    {
        suma= array[i]+suma;
    }
    cout << "1: Suma wynosi:  " <<suma << endl;
    for ( i=0; i<2000 ; i++)
    {
        if (array[i]>0)
            b++;;

    }
    cout << "2: Liczba elementow wiekszych od 0:  " <<b << endl;
    for (i=0; i<2000 ; i++)
    {
        if (array[i]<-1000)
            c++;;

    }
    cout << "3: Liczba elementow mniejszych od -1000:  " <<c <<endl;
    cout << "4: Wartosc srednia:  " << suma/2000 << endl;
    for ( i=0; i<1000 ; i++)
    {
        suma2+=array[i];
    }
    cout << "Suma elementow od 0 do 999 wynosi:  " <<suma2 << endl;
    for ( i=1000; i<2000 ; i++)
    {
        suma3+=array[i];
    }
    cout << "Suma elementow od 1000 do 1999 wynosi:  " <<suma3 << endl;
    if (suma2>suma3) cout << "Suma elementow o indeksach 0 - 999 jest wieksza" <<endl;
    else cout << "Suma elementow o indeksach 1000 - 1999 jest wieksza" <<endl;


}

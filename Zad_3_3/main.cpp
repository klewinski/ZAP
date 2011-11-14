#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    int const k = 10;
    double array [10][k];
    double suma =0;
    int ilosc =0;
    srand(time(0));

    for ( int i=0; i<10 ; i++)
    {
        for ( int j=0; j<10 ; j++)
        {
            array[i][j]=30*rand ( ) /double(RAND_MAX)-15;
            cout << i <<"  "<<j<< "  " << array[i][j] <<endl;
        }
    }
    for ( int i=0; i<10 ; i++)
    {
        for ( int j=0; j<10 ; j++)
        {
            if (array[i][j]>0)
            {
                suma += array[i][j];
                ilosc++;
            }
        }
    }
    double srednia = suma/ilosc;
    cout << "Srednia to:  " << srednia <<endl;

    for (int i=0; i<10; i++ )
    {
        if(array[0][i]> srednia)
        {
            array [0][i]=0;
        }
        if(array[9][i]> srednia)
        {
            array [9][i]=0;
        }
    }
    for (int i=1; i<9; i++ )
    {
        if(array[i][0]> srednia)
        {
            array [i][0]=0;
        }
        if(array[i][9]> srednia)
        {
            array [i][9]=0;
        }

    }
    cout<< "Tablica - podpunkt 3"<<endl;
    double element= 0;
    int stat=1;

    for (int i=0; i<10; i++)
    {
        stat=1;
        int j =0;

        while(stat==1&&j<10)
        {
            if (array[j][i]==0)
            {
                element=array[0][i];
                for(int k=1; k<9; k++)
                {
                    array[k-1][i]=array[k][i];
                }
                array[9][i]=element;
                stat=0;
            }
            j++;
        }
    }
    for ( int i=0; i<10 ; i++)
    {
        for ( int j=0; j<10 ; j++)
        {
            cout << i <<"  "<<j<< "  " << array[i][j] <<endl;
        }
    }

}


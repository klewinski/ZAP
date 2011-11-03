#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    int i;
    int opcja;
    int status=0;
    int array[10];
    srand ( time(0) );
    for ( i=0; i<10 ; i++)
    {
        array [i]=20*(rand ( )/double(RAND_MAX));
    }
    while (status==0)
    {
        cout << endl << "1 - Nowa gra"<< endl << "2 - Wyjdz" << endl;
        cout << "Wybierz [1 lub 2]" << endl;
        cin >> opcja;
        int a;
        switch(opcja)
        {

        case 1 :
            for (int proba=0; proba<3 ; proba++)
            {
                cout << "Losowanie" << endl;
                cout << "Zgadnij liczbe[0-20] :" << endl;
                cin >> a;
                int traf=0;
                for ( i=0; i<10 ; i++)
                {
                    if(a==array[i])
                    {
                        traf=1 ;
                        break;
                    }
                }
                if (traf==1)
                {
                    cout << "Trafiles" << endl;
                    break;
                }
                else cout << "Nie trafiles" << endl;
            }
            break;

        case 2 :
            status =1;
            break;
        }
    }

}

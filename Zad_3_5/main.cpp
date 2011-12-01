#include <iostream>

using namespace std;

int main()
{
    int const n=10;
    int letters=0;
    int letters2=0;
    int numbers=0;
    int rest=0;

    char array[n];

    for (int i=0; i<n; i++)
        cin>>array[i];

    for (int i=0; i<n; i++)
        if ((array[i]>='a')&&(array[i]<='z'))
            letters++;
        else
        {
            if ((array[i]>='A')&&(array[i]<='Z'))
                letters2++;
            else
            {
                if ((array[i]>='0')&&(array[i]<='9'))
                numbers++;
                else
                rest++;
                }
        }
        cout<<"1. Malych liter: "<< letters<< endl;
cout<<"2. Duzych liter: "<< letters2<< endl;
cout<<"3. Cyfr: "<< numbers<< endl;
cout<<"4. Pozostalych: "<< rest<< endl;
}

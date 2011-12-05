#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    double x,y;
    double r;
};

int main()
{
    int const n=5;
    Point array[n];
    Point array2[n];
    int x =0;
    for(int i=0; i<n; i++)
    {
        cout<<"Wpisz wspol. x punktu " << i+1 <<endl;
        cin>>array[i].x;
        cout<<"Wpisz wspol. y punktu " << i+1 <<endl;
        cin>>array[i].y;
        array[i].r=pow((pow(array[i].x,2)+pow(array[i].y,2)),0.5);
    }

    for (int i = 0 ; i < n; i++ )
        if (array[i].r <=10){
            array2[x] = array[i];
            x++;}
    for (int i = 0 ; i < n; i++ )
        if (array[i].r >10){
            array2[x] = array[i];
            x++;}

    for(int i=0; i<n; i++)
    {
        cout<<"Punkt "<<i <<'\t'<< array2[i].x<<'\t';
        cout<<array2[i].y<<'\t' <<array2[i].r<< endl;
    }
}


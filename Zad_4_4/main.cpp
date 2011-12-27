#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

struct Point
{
    double x,y,z,r;
};
int main()
{
    int i=0;
    int const n =20;
    Point array[n];
    srand(time(0));
    Point p;
    p.x=0;
    p.y=0;
    p.z=0;
    p.r=0;
    while(i<n)
    {
        p.x=rand()/double(RAND_MAX)*10-5+10;
        p.y=rand()/double(RAND_MAX)*10-5+7;
        p.z=rand()/double(RAND_MAX)*10-5+5;
        p.r =pow(pow(p.x-10,2)+pow(p.y-7,2)+pow(p.z-5,2),0.5);

        if (p.r<=5)
        {
            array[i]=p;
            i++;
        }
    }

for (int i=0; i<n; i++){
int j=i;
Point temp=array[j];
while(j>0 && (temp.r < array[j-1].r)){
array[j]=array[j-1];
j=j-1;
}
array[j]=temp;
}

for(int i=0; i<n ; i++){
        cout<< array[i].x <<"  " <<array[i].y << "  ";
        cout<< array[i].z << "  "<< array[i].r << endl;
}
}

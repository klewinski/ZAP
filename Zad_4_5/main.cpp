#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;


struct Point
{
    int x,y,z;
};
int main()
{
    srand(time(0));
    int const n=5;
    int const w=5;
    int const k=5;
    Point p;
    p.x=0;
    p.y=0;
    p.z=0;
    Point points[w][k];
    bool array[k];
    bool flag=0;


    for(int i=0; i<k; i++)
    {
        for (int j=0; j<w; j++)
        {
            points[j][i].x=rand()/double(RAND_MAX)*10;
            points[j][i].y=rand()/double(RAND_MAX)*10;
            points[j][i].z=rand()/double(RAND_MAX)*10;
        }
    }
    for(int i=0; i<k; i++)
    {
        for (int j=0; j<w; j++)
        {
            if(points[i][j].x==0 || points[i][j].y==0 || points[i][j].z==0)
            {
                flag=1;
            }

        }
if(flag==1)array[i]=true;
else array[i]=false;
flag=0;
    }
    for(int i=0; i<k; i++)
    {
        for (int j=0; j<w; j++)
        {
            cout << i<<"."<<j<<"  "<<points[j][i].x<< " ";
            cout<<points[j][i].y<< " " <<points[j][i].z<< "    ";
        }
        cout<<endl;
    }

    for (int i=0 ; i<k ; i++)
        cout<< array[i]<<"  " ;
}

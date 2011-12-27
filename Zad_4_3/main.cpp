#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

struct Point {
    double x,y;
    double r;
};

int const R =5;
Point random_square (void){
    Point p;
    p.x = (rand()/((double)RAND_MAX)*2*R)+5;
    p.y = (rand()/((double)RAND_MAX)*2*R);
    p.r =pow(pow(p.x-10,2)+pow(p.y-5,2),0.5);
return p;
}


int random_circle(Point p){
        if (pow(p.x-10,2)+pow(p.y-5,2)<pow(R,2))
 return 1;
 else
 return 0;
}

int main()
{
    srand(time(0));
    int const n=100;
    int i=0;
    Point temp;
    temp.r=0;
     temp.x=0;
     temp.y=0;
    Point array[n];
    while(i<n){
        temp = random_square();
        if (random_circle(temp)){
    array[i]=temp;
    i++;}
    }

    for (int i=0; i<n-1; i++){
    int i_min = i;
    for (int j=i+1; j<n; j++){
    if (array[j].r<array[i_min].r)
    i_min =j;
    }
    temp=array[i];
    array[i] = array[i_min];
    array[i_min]=temp;
    }
    for (int i=0; i<n ; i++){
    cout<< i << "  " << array[i].x << "  " << array[i].y;
    cout<< "  " << array[i].r << endl;
    }
}

#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    y=3920;
    x=46000;
    z=2010;
    for ( z;x>y;z++)
    {
        if (z%5==0) cout<< z <<"  " << x <<"  " << y << endl;

          x=1.025*x;
          y=1.09*y;
    }
    cout << "Chinczycy beda bogatsi w: " << z << "roku" << endl;
    cout << z << "  " << x << "  "  << y << endl;
    return 0;
}

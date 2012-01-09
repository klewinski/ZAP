#include <iostream>

using namespace std;

double absolute(double x)
{
    if (x>=0)
    {
        return x;
    }
    else
        return -x;
}
double fahrenheit(double x)
{
    return (5/(double)9)*(x-32);
}
double power(double p,int y)
{
    double number=p;
    for(int i=1; i<y; i++)
    {
        number=number*p;
    }
    return number;
}
void printPyramid(int h)
{
    int num=1;
    int space=h-1;

        for(int i=0; i<h; i++)
        {

            for(int j=1; j<=space; j++)
            {
                cout<<" ";
            }
            for(int k = 1; k<=num; k++ )
            {
                cout<<"* ";
            }
            space--;
            num++;
            cout<<endl;
        }

}

int main()
{
    double x;
    double temp;
    double p;
    int y;
    int height;

    cout<<"Funkcja 1:  "<<endl;
    cout<<"Wpisz liczbe: "<<endl;
    cin>>x;
    cout<<"Wartosc absolutna to:  "<< absolute(x)<<endl<<endl;

    cout<<"Funkcja 2:  "<<endl;
    cout<<"Wpisz temperature w stopniach Fahreheita:  "<<endl;
    cin>>temp;
    cout<<"Tempertura w stopniach Celcjusza to:  "<<fahrenheit(temp)<<endl<<endl;

    cout<<"Funkcja 3:  "<<endl;
    cout<<"Podaj podstawe:  "<<endl;
    cin>>p;
    cout<<"Podaj wykladnik:  "<<endl;
    cin>>y;
    cout<<"Wynik:  "<<power(p,y)<<endl<<endl;

    cout<<"Funkcja 4:  "<<endl;
    cout<<"Podaj wysokosc piramidy:  "<<endl;
    cin>>height;
    printPyramid(height);

}

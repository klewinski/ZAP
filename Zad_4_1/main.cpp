#include <iostream>

using namespace std;
struct Auto
{
    string marka;
    double cena;
    int rocznik;
};
int main()
{
    int const n=3;
    int x;
    Auto cars[n];
    Auto sortcars[n];

    for (int i=0; i<n; i++)
    {

        cout<< "Wpisz marke: "<<endl;
        cin>>cars[i].marka;
        cout<< "Wpisz cene: "<<endl;
        cin>>cars[i].cena;
        cout<< "Wpisz rocznik: "<<endl;
        cin>>cars[i].rocznik;
    }
    cout<<"1- Srotuj wg. marki"<<endl;
    cout<<"2- Srotuj wg. ceny"<<endl;
    cout<<"Wybierz sortowanie(1/2): "<<endl;
    cin >> x;
    if (x==1)
    {
        string temp;
        for (int i=0; i<n-1; i++){
            int i_min=i;
            for (int j=i+1; j<n; j++){
        if(cars[j].marka<cars[i_min].marka)
        i_min=j;
            }
            temp=cars[i].marka;
            cars[i].marka=cars[i_min].marka;
            cars[i_min].marka=temp;
        }

       }
    if (x==2)
    {
        double temp;
        for (int i=0; i<n-1; i++){
            int i_min=i;
            for (int j=i+1; j<n; j++){
        if(cars[j].cena<cars[i_min].cena)
        i_min=j;
            }
            temp=cars[i].cena;
            cars[i].cena=cars[i_min].cena;
            cars[i_min].cena=temp;
        }
    }
for (int i=0; i<n; i++)
cout<<cars[i].marka <<"  " << cars[i].cena << "  " << cars[i].rocznik <<endl;
}

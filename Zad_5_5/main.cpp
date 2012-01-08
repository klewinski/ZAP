#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string name;
    string line;
    int x;


    do
    {
        cout<<"Menu:"<<endl;
        cout<<"1. Zawartosc pliku"<<endl;
        cout<<"2. Koniec"<<endl;
        cout<<"Wybierz(1/2): "<<endl;
        cin>>x;
        if (x==2)
            break;
        cout<<"Podaj nazwe pliku do wczytania: "<<endl;
        cin>>name;
        ifstream file;
        file.open(name.c_str());
        if(!file.good())
            cout<<"Nie mozna otworzyc pliku"<<endl;
        else{
            cout<<"Zawartosc pliku to: "<<endl<<endl;
        while(!file.eof())
        {
            getline(file,line);
            cout<<line<<endl;
        }
        cout<<endl;
        }
    }

    while(x==1);

}

#include <iostream>
#include <fstream>


using namespace std;

int main()
{
    int const n=4;
    string name;
    string text;

    cout<<"Nazwij plik: "<<endl;
    cin>>name;

    ofstream file;
    file.open(name.c_str());

    for(int i=0; i<n;i++){
     cin>>text;
    file<<text;
    file<<endl;
    }
    file.close();


    ifstream file2;
    file2.open(name.c_str());

    ofstream results;
    results.open("results.txt");

    cout<<endl<<"Zawartosc pliku result.txt"<<endl;

    for( int i=0; i<n; i++){
    getline(file2,text);
    if((text[0]>'A')&&(text[0]<'Z')&&(text.length()<=10)){
    results<<text;
    cout<<text<<endl;
    }}
    file2.close();
    results.close();

}

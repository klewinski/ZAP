#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int lines_num=0;
    string line;
    char c;
    int chars_num=0;

    ifstream file;
    file.open("chars.txt");
    ofstream temp;
    temp.open("temp.txt");
    if(!file.good())
    {
        cout<<"Nie mozna otworzyc pliku."<<endl;
    }
    while(!file.eof())
    {
        getline(file,line);
        temp<<line;
        temp<<endl;
        lines_num++;
    }
    file.clear();
    file.seekg(0);
    while(!file.eof())
    {
        c=file.get();
        chars_num++;
    }
    file.close();
    temp.close();

    ifstream temp2;
    temp2.open("temp.txt");
    ofstream file2;
    file2.open("chars.txt");
    file2<<"Linie:  "<<lines_num<<endl;
    file2<<"Znaki:  "<<chars_num<<endl;
    while(!temp2.eof())
    {
        getline(temp2,line);
        file2<<line;
file2<<endl;
    }


    temp2.close();
    file2. close();

    ifstream file3;
    file3.open("chars.txt");
    while(!file3.eof())
    {
        getline(file3,line);
        cout<<line<<endl;
    }
    file3.close();
}

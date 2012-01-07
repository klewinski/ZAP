#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

bool letters (char a)
{
    if( (a>='a'&&a<='z')||(a>='A'&&a<='Z'))
        return true;
    return false;
}

bool numbers (char a)
{
    if(a>='0'&&a<='9')
        return true;
    return false;
}

bool other (char a)
{
    if( a=='/'|| a=='*' || a=='-'  || a=='+')
        return true;
    return false;
}

int main()
{
    int chars_num = 0;
    int letters_num =0;
    int numbers_num =0;
    int other_num = 0;
    char t;
    ifstream file2("chars.txt");

    if( !file2.is_open()){
    cout<<"Nie mozna otworzyc"<<endl;
    exit(0);
    }
    while(!file2.eof())
    {
        t = file2.get();
        cout<<t<<endl;
        chars_num++;
        if (letters(t))
        {
            letters_num++;
        }
        else
        {
            if (numbers(t))
            {
                numbers_num++;
            }
            else
            {
                if(other(t))
                other_num++;
            }
        }
    }
    file2.close();
    cout<<" Znaki :  "<< chars_num<< endl;
    cout<<" Litery :  "<< letters_num<< endl;
    cout<<" Cyfry :  "<< numbers_num<< endl;
    cout<<" Inne :  "<< other_num<< endl;



}

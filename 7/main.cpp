#include <iostream>

using namespace std;

int main()
{
  char a ;
  cout << "Wpisz cyfre : " << endl ;
  cin >> a ;
    if (a >= 65 && a <= 90) cout << "Wprowadzono duza litera";
    else cout << "Wprowadzono inny znak";
    return 0;
}

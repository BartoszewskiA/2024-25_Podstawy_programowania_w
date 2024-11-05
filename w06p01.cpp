#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s="";
    
    cout << "Podaj imie i nazwisko: ";
    // cin>>s;
    getline(cin, s);
    cout << "Witaj " << s;

    return 0;
}
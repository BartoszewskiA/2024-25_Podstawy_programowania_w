#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "brak pliku";
        return 0;
    }
    string tekst;
    while (!plik.eof())
    {
        getline(plik, tekst);
        cout << tekst << endl;
    }
    plik.close();

    return 0;
}
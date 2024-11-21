#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string tab[1000];
    int n = 0;
    string nazwa;
    cout << "Podaj nazwe pliku: ";
    getline(cin, nazwa);
    plik.open(nazwa, ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    while (!plik.eof())
    {
        getline(plik, tab[n]);
        n++;
    }
    plik.close();

    for (int i = n - 1; i >= 0; i--)
        cout << tab[i] << endl;
    return 0;
}
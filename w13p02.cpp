#include <iostream>
#include <string>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    osoba *tab[100];
    int n = 0;
    string imie;
    while (1)
    {

        cout << "Podaj imie: ";
        getline(cin, imie);
        if (imie.length() == 0)
            break;
        tab[n] = new osoba;
        tab[n]->imie = imie;
        cout << "Podaj nazwisko: ";
        getline(cin, tab[n]->nazwisko);
        cout << "Podaj wiek: ";
        cin >> tab[n]->wiek;
        cin.ignore();
        n++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << tab[i]->imie << " " << tab[i]->nazwisko << " " << tab[i]->wiek << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete tab[i];
    }
    return 0;
}
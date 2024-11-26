#include <iostream>
#include <string>
#include <fstream>

using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int wczytaj(osoba tab[]);
void wypisz(osoba tab[], int n);
void zapisz_do_pliku(string nazwa, osoba tab[], int n);
int wczytaj_z_pliku(string nazwa, osoba tab[]);

int main()
{
    osoba tab[100];
    int n = 0;
    // n = wczytaj(tab);
    n = wczytaj_z_pliku("baza.txt", tab);
    wypisz(tab, n);
    // zapisz_do_pliku("baza.txt", tab, n);
    return 0;
}

int wczytaj(osoba tab[])
{
    int ile = 0;
    osoba ktos;
    string temp;
    while (1)
    {
        cout << "Imie: ";
        getline(cin, ktos.imie);
        if (ktos.imie == "")
            break;
        cout << "Nazwisko: ";
        getline(cin, ktos.nazwisko);
        cout << "Wiek: ";
        getline(cin, temp);
        ktos.wiek = stoi(temp);
        tab[ile++] = ktos;
    }
    return ile;
}

void wypisz(osoba tab[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << tab[i].imie << " "
             << tab[i].nazwisko << " "
             << tab[i].wiek << endl;
    }
}

void zapisz_do_pliku(string nazwa, osoba tab[], int n)
{
    fstream plik;
    plik.open(nazwa, ios::out);
    if (!plik.good())
    {
        cout << "Zla nazwa pliku";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        plik << tab[i].imie << endl
             << tab[i].nazwisko << endl
             << tab[i].wiek << endl;
    }
    plik.close();
}

int wczytaj_z_pliku(string nazwa, osoba tab[])
{
    fstream plik;
    plik.open(nazwa, ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    int ile = 0;
    osoba ktos;
    string temp;
    while (!plik.eof())
    {
        getline(plik, ktos.imie);
        if (ktos.imie == "")
            break;
        getline(plik, ktos.nazwisko);
        getline(plik, temp);
        ktos.wiek = stoi(temp);
        tab[ile] = ktos;
        ile++;
    }
    plik.close();
    return ile;
}

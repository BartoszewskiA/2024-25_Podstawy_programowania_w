#include <iostream>

using namespace std;

struct Osoba
{
    string imie;
    string nazwisko;
    int wiek;
};


int main()
{
    Osoba ktos;
    Osoba *ktos2 = new Osoba;
    
    ktos2->imie = "Jan";
    ktos2->nazwisko = "Kowalski";
    ktos2->wiek = 30;


    ktos.imie = "Jan";
    ktos.nazwisko = "Kowalski";
    ktos.wiek = 30;
    return 0;
}
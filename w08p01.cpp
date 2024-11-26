#include <iostream>

using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    osoba pracownik1 = {"AAAA", "BBBBBB", 30};

    pracownik1.imie = "Jan";
    pracownik1.nazwisko = "Kowalski";
    pracownik1.wiek = 30;

    cout << pracownik1.imie << " "
         << pracownik1.nazwisko << " "
         << pracownik1.wiek;
    return 0;
}

void funkcja()
{
    osoba ktos;
}
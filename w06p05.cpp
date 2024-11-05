#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie_nazwisko, kierunek, temp;
    int semestr;

    cout << "Imie: ";
    getline(cin, imie_nazwisko);
    cout << "Semestr: ";
    getline(cin, temp);
    semestr = stoi(temp);
    cout << "Kierunek: ";
    getline(cin, kierunek);

    cout << imie_nazwisko << " " << semestr << " " << kierunek;

    return 0;
}
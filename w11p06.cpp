#include <iostream>
#include <string>

using namespace std;

int main()
{
    string *tab[1000]; // statyczna tablica zawierająca wskaźniki
    int n = 0;

    // tab[0] = new string;
    // *tab[0] = "aaaaa";

    string s;
    while (1)
    {
        cout << "Podaj tekst: ";
        getline(cin, s);
        if (s.length() == 0)
            break;
        tab[n] = new string;
        *tab[n] = s;
        n++;
    }

    for (int i = 0; i < n; i++)
        cout << *tab[i] << "  ";

    for (int i = 0; i < n; i++)
        delete tab[i];
    return 0;
}
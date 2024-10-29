#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int ile;
    cout << "Ile elementow wczytac: ";
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        cout << "tab[" << i + 1 << "]=";
        cin >> tab[i];
    }
    int suma = 0;
    for (int i = 0; i < ile; i++)
        suma += tab[i];
    double srednia = (double)suma / ile;
    cout << "Wieksze od sredniej byly: ";
    for (int i = 0; i < ile; i++)
        if (tab[i] > srednia)
            cout << " " << tab[i];
    return 0;
}
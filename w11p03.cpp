#include <iostream>

using namespace std;

void wypisz(char tab[]);
void wypisz_2(char *tab);
void wypisz_3(char *tab);

int main()
{
    char tab[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    // wypisz(tab);
    //wypisz_2(tab);
    wypisz_3(tab);

    return 0;
}

void wypisz_2(char *tab)
{
    for (int i = 0; i < 7; i++)
        cout << *(tab + i) << " ";
}

void wypisz(char tab[])
{
    for (int i = 0; i < 7; i++)
        cout << tab[i] << " ";
}

void wypisz_3(char *tab)
{
    for (int i = 0; i < 7; i++)
        cout << tab[i] << " ";
}
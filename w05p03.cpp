#include <iostream>
#include <ctime>

using namespace std;

void wypisz_cos();
int rzut_kostka();
int losowanie_z_zakresu(int a=0, int b=9);

int main()
{
    srand(time(NULL));
    // wypisz_cos();
    // for (int i = 0; i < 6; i++)
    //     cout << rzut_kostka() << " ";

    for (int i = 0; i < 20; i++)
        cout << losowanie_z_zakresu(-9) << " ";
    return 0;
}

void wypisz_cos()
{
    cout << "To Ja twoja pierwsza funkcja!";
}

int rzut_kostka()
{
    int wynik = rand() % 6 + 1;
    return wynik;
}

int losowanie_z_zakresu(int a, int b)
{
    return rand() % (b - a + 1) + a;
}

#include <iostream>

using namespace std;

const int KOLUMNY = 6;
const int WIERSZE = 12;

int main()
{
    int tab[WIERSZE][KOLUMNY];
    for (int i = 0; i < WIERSZE; i++)
        for (int j = 0; j < KOLUMNY; j++)
            tab[i][j] = (i + 1) * (j + 1);

    for (int i = 0; i < WIERSZE; i++)
    {
        for (int j = 0; j < KOLUMNY; j++)
            cout << tab[i][j] << "\t";
        cout << endl;
    }
    return 0;
}
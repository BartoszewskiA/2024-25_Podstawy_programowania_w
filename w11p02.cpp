#include <iostream>

using namespace std;

int main()
{
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // cout << tab[0];
    // cout << *(tab+3);

    // for (int i = 0; i < 10; i++)
    //     cout << *(tab + i) << " ";

    int *p = tab;

    for (int i = 0; i < 10; i++)
    {
        cout << *p << " ";
        p++;
    }
    return 0;
}
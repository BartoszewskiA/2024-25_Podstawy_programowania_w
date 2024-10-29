#include <iostream>

using namespace std;

int main()
{
    int tab[100];
    int x, n = 0;
    while (1)
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        tab[n] = x;
        n++;
    }

    for (int i = n-1; i >= 0; i--)
        cout << tab[i] << " ";

    return 0;
}
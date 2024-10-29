#include <iostream>

using namespace std;

int main()
{
    const int ile = 10;
    int tab[ile];
    // cin >> tab[3];
    // tab[5] = 100;

    // cout<<tab[0];
    for (int i = 0; i < ile; i++)
        tab[i] = i;
    for (int i = 0; i < ile; i++)
        cout << "tab=" << tab[i] << "\t";
    return 0;
}
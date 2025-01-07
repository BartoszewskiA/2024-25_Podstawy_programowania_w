#include <iostream>

using namespace std;

void wypisz(int x)
{
    cout << x << endl;
    if (x > 0)
        wypisz(x - 1);
    else
        return;
}

int silnia(int x)
{
    if (x == 0)
        return 1;
    else
        return x * silnia(x - 1);
}

int main()
{
    cout << silnia(5) << endl;
    return 0;
}
#include <iostream>

using namespace std;

void funkcja(int *x);

int main()
{
    int x = 10;
    int * p;
    p = &x;
    funkcja(p);
    cout << "W funkcji main jest: " << x << endl;
    return 0;
}

void funkcja(int *x)
{
    (*x)++;
    cout << "Przeslano: " << *x << endl;
}
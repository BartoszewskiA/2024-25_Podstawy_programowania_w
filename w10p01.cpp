#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *px;
    px = &x;
    *px = 20;
    (*px)++;
    cout << "zmienna: " << x << endl;
    cout << "Wskaznik: " << *px;
    return 0;
}
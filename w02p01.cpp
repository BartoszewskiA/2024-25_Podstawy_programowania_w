#include <iostream>

using namespace std;

int main()
{
    int x, y;
    double wynik;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    if (y != 0)
    {
        
        wynik = (double)x / y;
        cout << "wynik=" << wynik;
    }
    else
        cout<<"Nie dziel przez zero";

    return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    int x;
    plik.open("dane2.dat", ios::in);
    if (plik.good())
    {
        while (!plik.eof())
        {
            plik >> x;
            cout << "wcztana liczba to: " << x << endl;
        }
        plik.close();
    }
    return 0;
}
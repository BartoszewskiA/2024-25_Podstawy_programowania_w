#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    int x;
    string temp;
    plik.open("dane.txt", ios::in);
    if (plik.good())
    {
        while (!plik.eof())
        {
            getline(plik, temp);
            x = stoi(temp);
            cout << "wcztana liczba to: " << x << endl;
        }
        plik.close();
    }
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string tab[1000];
    int n = 0;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "blad pliku";
        return 0;
    }
    string temp;
    while (!plik.eof())
    {
        getline(plik, temp);
        if (!temp.empty())
        {
            tab[n] = temp;
            n++;
        }
    }
    plik.close();
    //--------------------------------------------------
    plik.open("dane.txt", ios::out);
    for (int i = 0; i < n; i++)
        plik << tab[i] << endl;
    plik.close();

    return 0;
}
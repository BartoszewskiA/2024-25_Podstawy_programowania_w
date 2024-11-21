#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt",ios::app);
    plik<<"tekst zapisany do pliku"<<endl;
    plik.close();
    return 0;
}
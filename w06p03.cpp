#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Ala ma kota";
    cout << "Jakiej litery szukany: ";
    char znak = getchar();
    // int pozycja = s.find('a');
    int pozycja = s.find(znak);
    cout << "litera " << znak << " jest na pozycji " << pozycja;
    return 0;
}
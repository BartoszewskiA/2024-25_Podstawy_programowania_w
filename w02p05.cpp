#include <iostream>

using namespace std;

int main()
{
    int x;
    int suma = 0;
    do
    {
        cout << "x=";
        cin >> x;
        suma = suma + x;
    } while (x != 0);
    cout << "suma=" << suma;
    return 0;
}
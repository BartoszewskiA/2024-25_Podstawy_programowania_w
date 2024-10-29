#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    int x;
    for (int i = 0; i < 7; i++)
    {
        cout << "x(" << i + 1 << ")=";
        cin >> x;
        if (x < 0)
            continue;
        suma+=x; //suma = suma + x;
    }
    cout << "Suma=" << suma;
    return 0;
}
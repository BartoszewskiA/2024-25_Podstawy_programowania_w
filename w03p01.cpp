#include <iostream>

using namespace std;

int main()
{
    int x;
    int suma = 0;
    // do
    // {
    //     cout << "x=";
    //     cin >> x;
    //     if (x >= 0)
    //         suma = suma + x;
    // } while (x >= 0);
    while(1)
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        suma = suma + x;
    }
    cout << "suma=" << suma;
    return 0;
}
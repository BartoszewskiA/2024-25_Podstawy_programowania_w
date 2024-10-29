#include <iostream>

using namespace std;
void zwieksz_o_10(int);

int main()
{
    int x=30;
    zwieksz_o_10(x);
    cout << "Po zwiekszenu: " << x;
    return 0;
}

void zwieksz_o_10(int z)
{
    z += 10;
    cout << "wewnatrz funkcji z=" << z << endl;
}
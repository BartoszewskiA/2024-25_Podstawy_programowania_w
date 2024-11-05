#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Ala ma kota";
    for (int i = s.length()-1; i >= 0; i--)
        cout << s[i] << "(" << (int)s[i] << ")";
    return 0;
}
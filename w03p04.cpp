#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    // dowolny

    if (a + b > c && a + c > b && b + c > a)
        cout << "TAK (dowolny)";
    else
        cout << "NIE (dowolny)";

    cout << endl;
    //prostokatny
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        cout << "TAK (prostokatny)";
    else
        cout << "NIE (prostokatny)";

    return 0;
}
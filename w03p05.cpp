#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Podaj liczbe elementow: ";
    cin >> n;
    double a = 1, b = 1, c;
    cout << a << "\t";
    cout << b << "\t";
    for(int i=2; i<n; i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<"\t";
        }
    return 0;
}
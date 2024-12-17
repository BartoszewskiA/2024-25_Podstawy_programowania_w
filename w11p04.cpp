#include <iostream>

using namespace std;

int main()
{
    int *wsk = new int;
    *wsk = 101;
    cout << *wsk;

    delete wsk;
    return 0;
}
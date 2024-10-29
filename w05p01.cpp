#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    // n liczb z zakresu <-100, 100>
    srand(time(NULL));
    int n;
    cout << "n=";
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << rand() % 201 - 100 << "\t"; // rand()%(b-a+1)+a
    return 0;
}
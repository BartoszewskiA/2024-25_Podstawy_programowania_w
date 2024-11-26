#include <iostream>
#include <ctime>

using namespace std;

struct kolor
{
    int R;
    int G;
    int B;
};
kolor losuj();

int main()
{
    srand(time(NULL));
    kolor wylosowany = losuj();
    cout << wylosowany.R << " "
         << wylosowany.G << " "
         << wylosowany.B << endl;
    return 0;
}

kolor losuj()
{
    kolor x;
    x.R = rand() % 256;
    x.G = rand() % 256;
    x.B = rand() % 256;
    return x;
}
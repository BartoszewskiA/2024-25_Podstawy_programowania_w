#include <iostream>
#include <ctime>

// wylosuj bez zwracania 7 liczb z 49
using namespace std;

int main()
{
    srand(time(NULL));
    int wyniki[7];
    int n =0;
    bool powtorzenie;
    do
    {
        wyniki[n] = rand() % 49 + 1;
        powtorzenie=false;
        for(int i=0; i<n; i++)
            if(wyniki[n]==wyniki[i])
                powtorzenie=true;
        if(powtorzenie) continue;
        n++;
    } while(n<7);

    for (int i = 0; i < 7; i++)
        cout << wyniki[i] << " ";

    return 0;
}
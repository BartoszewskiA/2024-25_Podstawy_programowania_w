#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// 0 - pole puste       -> 1
// 1 - pudlo
// 2 - odkryty statek   -> 3
// 3 - trafiony statek
// 7 - ukryty statek    -> 3

// int plansza[10][10] = {
//     0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
//     7, 7, 0, 0, 0, 0, 0, 0, 0, 0,
//     0, 0, 0, 7, 0, 7, 7, 7, 0, 0,
//     0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
//     1, 0, 0, 2, 1, 0, 0, 0, 0, 0,
//     0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
//     0, 7, 0, 0, 0, 0, 7, 7, 7, 0,
//     0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
//     0, 7, 0, 0, 2, 3, 2, 7, 0, 0,
//     0, 7, 0, 0, 0, 0, 0, 0, 0, 0};

int plansza[10][10];
int licznik = 0;
int amunicja = 25;

void rysuj_plansze(bool odkryj);
void strzal(string pozycja);
void sprawdz_sasiednie(int x, int y);
bool koniec_gry();
void czysz_plansze();
bool kolizja(int x, int y);
bool ustaw_statek_1(int x, int y);
bool ustaw_statek_2(int x, int y, int kierunek);
bool ustaw_statek_3(int x, int y, int kierunek);
void losuj_plansze();

int main()
{
    srand(time(NULL));
    czysz_plansze();
    losuj_plansze();
    string pozycja;
    do
    {
        rysuj_plansze(false);
        cout << "Strzal: ";
        cin >> pozycja;
        if (pozycja == "x")
            break;
        strzal(pozycja);

    } while (amunicja > 0 && !koniec_gry());
    rysuj_plansze(true);
    return 0;
}

void rysuj_plansze(bool odkryj)
{
    system("cls");
    cout << "\t";
    for (int i = 0; i < 10; i++)
        cout << " " << (char)(((int)'A') + i) << " ";
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << "\t";
        for (int j = 0; j < 10; j++)
        {
            switch (plansza[i][j])
            {
            case 0:
                cout << " . ";
                break;
            case 1:
                cout << " * ";
                break;
            case 2:
                cout << (char)176 << (char)176 << (char)176;
                break;
            case 3:
                cout << (char)176 << "#" << (char)176;
                break;
            case 7:
                if (odkryj)
                    cout << (char)219 << (char)219 << (char)219;
                else
                    cout << " . ";
                break;
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Tura: " << licznik << endl
         << "Pozostała amunicja: " << amunicja
         << endl
         << endl;
}

void strzal(string pozycja)
{
    char k = pozycja[0];
    string w = pozycja.substr(1);
    int x = stoi(w) - 1;
    int y = (int)k - (int)'A';
    switch (plansza[x][y])
    {
    case 0:
        plansza[x][y] = 1;
        break;
    case 2:
        plansza[x][y] = 3;
        break;
    case 7:
        plansza[x][y] = 3;
        break;
    }
    sprawdz_sasiednie(x, y);
    amunicja--;
    licznik++;
}

void sprawdz_sasiednie(int x, int y)
{
    if (y > 0 && plansza[x][y - 1] == 7)
        plansza[x][y - 1] = 2;
    if (y < 9 && plansza[x][y + 1] == 7)
        plansza[x][y + 1] = 2;
    if (x > 0 && plansza[x - 1][y] == 7)
        plansza[x - 1][y] = 2;
    if (x < 9 && plansza[x + 1][y] == 7)
        plansza[x + 1][y] = 2;
}

bool koniec_gry()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            if (plansza[i][j] == 7)
                return false;
    return true;
}

void czysz_plansze()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            plansza[i][j] = 0;
}

bool kolizja(int x, int y) // true oznacza, ze wystapila kolizja
{
    // sprawdzamy, czy jest na planszy
    if (x < 0 || y < 0 || x > 9 || y > 9)
        return true;
    // pole zajete
    if (plansza[x][y] == 7)
        return true;
    // sasiaduje z zajetym polem
    if (plansza[x - 1][y] == 7 ||
        plansza[x + 1][y] == 7 ||
        plansza[x][y - 1] == 7 ||
        plansza[x][y + 1] == 7)
        return true;
    return false;
}

bool ustaw_statek_1(int x, int y)
{
    if (!kolizja(x, y))
    {
        plansza[x][y] = 7;
        return true;
    }
    else
        return false;
}

bool ustaw_statek_2(int x, int y, int kierunek) // 1 - poziomo   2 - pionowo
{
    if (kierunek == 0)
    {
        if (!kolizja(x, y) && !kolizja(x, y - 1))
        {
            plansza[x][y] = 7;
            plansza[x][y - 1] = 7;
            return true;
        }
    }
    else
    {
        if (!kolizja(x, y) && !kolizja(x - 1, y))
        {
            plansza[x][y] = 7;
            plansza[x - 1][y] = 7;
            return true;
        }
    }
    return false;
}

bool ustaw_statek_3(int x, int y, int kierunek) // 1 - poziomo   2 - pionowo
{
    if (kierunek == 0)
    {
        if (!kolizja(x, y) && !kolizja(x, y - 1) && !kolizja(x, y - 2))
        {
            plansza[x][y] = 7;
            plansza[x][y - 1] = 7;
            plansza[x][y - 2] = 7;
            return true;
        }
    }
    else
    {
        if (!kolizja(x, y) && !kolizja(x - 1, y) && !kolizja(x - 2, y))
        {
            plansza[x][y] = 7;
            plansza[x - 1][y] = 7;
            plansza[x - 2][y] = 7;
            return true;
        }
    }
    return false;
}

void losuj_plansze()
{
    int x, y, k, ile = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        if (ustaw_statek_1(x, y))
            ile++;
    } while (ile < 4);
    ile = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        k = rand() % 2;
        if (ustaw_statek_2(x, y, k))
            ile++;
    } while (ile < 3);

    ile = 0;
    do
    {
        x = rand() % 10;
        y = rand() % 10;
        k = rand() % 2;
        if (ustaw_statek_3(x, y, k))
            ile++;
    } while (ile < 3);
}
#include <iostream>
#include <string>

using namespace std;

struct element
{
    int wartosc;
    element *next;
};
element *poczatek = NULL;

void dodaj_na_poczatek(int x);
void wypisz();
void usun_pierwszy();

    int main()
{
    int x;
    while (1)
    {
        cout << "Podaj liczbe: ";
        cin >> x;
        if (x == 0)
            break;
        dodaj_na_poczatek(x);
    }
    wypisz();
    return 0;
}

void dodaj_na_poczatek(int x)
{
    element *nowy = new element;
    nowy->wartosc = x;
    nowy->next = poczatek;
    poczatek = nowy;
}

void wypisz()
{
    element *temp = poczatek;
    while (temp != NULL)
    {
        cout << temp->wartosc << " ";
        temp = temp->next;
    }
    cout << endl;
}

void usun_pierwszy()
{
    element *temp = poczatek;
    if (temp != NULL)
    {
        cout<<"Usuwam: "<<temp->wartosc<<endl;
        poczatek = temp->next;
        delete temp;
    }
}

void usun_liste()
{
    element *temp;;
    while (temp != NULL)
    {
        temp = poczatek;
        poczatek = poczatek->next;
        delete temp;
    }
}
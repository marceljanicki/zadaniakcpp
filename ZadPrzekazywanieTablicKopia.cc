#include <iostream>
#include <cstring>
using namespace std;


void przyjmijTablice(int* tablica, int rozmiar);


int main()
{
    int tab[5] = {1, 2, 3, 4, 5};

    cout << "Zawartosc tablicy przed wywolaniem funkcji: ";
    for (int i = 0; i < 5; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;

    przyjmijTablice(tab, 5);

    cout << "Zawartosc tablicy po wywolaniu funkcji: ";
    for (int i = 0; i < 5; i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}

void przyjmijTablice(int* tablica, int rozmiar)
{
    int kopia[rozmiar];
    memcpy(kopia, tablica, rozmiar * sizeof(int));

    for (int i = 0; i < rozmiar; i++)
    {
        kopia[i] *= 2;
    }

    cout << "Zawartosc kopii tablicy w funkcji: ";
    for (int i = 0; i < rozmiar; i++)
    {
        cout << kopia[i] << " ";
    }
    cout << endl;
}

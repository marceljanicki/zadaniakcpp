#include <iostream>
using namespace std;

int tablicaNaBinarna(int tablica[8]);

int main()
{
    int tablica[8] = {1, 0, 1, 1, 0, 0, 1, 0};

    cout << "Liczba binarna odpowiadajaca tablicy: " << tablicaNaBinarna(tablica) << endl;

    return 0;
}

int tablicaNaBinarna(int tablica[8])
{
    int wynik = 0;

    for (int i = 0; i < 8; i++)
    {
        if (tablica[i] == 1)
        {
            wynik = wynik | (1 << i);
        }
    }

    return wynik;
}

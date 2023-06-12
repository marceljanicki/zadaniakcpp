#include <iostream>
using namespace std;

template <typename T, size_t N>
void przyjmijTablice(T (&tablica)[N]);

int main()
{
    int tab1[5] = {1, 2, 3, 4, 5};
    double tab2[3] = {1.1, 2.2, 3.3};
    char tab3[4] = {'a', 'b', 'c', 'd'};

    przyjmijTablice(tab1);
    przyjmijTablice(tab2);
    przyjmijTablice(tab3);

    return 0;
}

template <typename T, size_t N>
void przyjmijTablice(T (&tablica)[N])
{
    cout << "Typ elementow tablicy: " << typeid(T).name() << endl;
    cout << "Rozmiar tablicy: " << N << endl;

    cout << "Zawartosc tablicy: ";
    for (size_t i = 0; i < N; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;
}

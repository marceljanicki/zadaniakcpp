#include <iostream>
using namespace std;

int zwrocWartosc(int x);
int& zwrocReferencje(int& x);
int* zwrocWskaznik(int* x);
int* zwrocTablice(int x);


int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    cout << "Zwracanie przez wartosc: " << endl;
    cout << "Przed wywolaniem funkcji: a = " << a << endl;
    cout << "Po wywolaniu funkcji: a = " << zwrocWartosc(a) << endl;

    cout << "Zwracanie przez referencje: " << endl;
    cout << "Przed wywolaniem funkcji: b = " << b << endl;
    cout << "Po wywolaniu funkcji: b = " << zwrocReferencje(b) << endl;

    cout << "Zwracanie przez wskaznik: " << endl;
    cout << "Przed wywolaniem funkcji: c = " << c << endl;
    cout << "Po wywolaniu funkcji: c = " << *zwrocWskaznik(&c) << endl;

    cout << "Zwracanie tablicy: " << endl;
    cout << "Przed wywolaniem funkcji: d = " << d << endl;
    int* tablica = zwrocTablice(d);
    cout << "Po wywolaniu funkcji: tablica[0] = " << tablica[0] 
         << ", tablica[1] = " << tablica[1] 
         << ", tablica[2] = " << tablica[2] 
         << ", tablica[3] = " << tablica[3] 
         << ", tablica[4] = " << tablica[4] 
         << endl;

    delete[] tablica;

    return 0;
}

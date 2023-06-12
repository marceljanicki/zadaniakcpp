#include <iostream>
using namespace std;

int main() {
	int tab[] = {11,22,33,44,55}, i = 3, *p, *q;

	p = &tab[0] + 3;
	cout << "*p = " << *p << endl;

	p = p - 2;
	cout << "*p = " << *p << endl;

	q = tab;
	cout << "*(q+2) = " << *(q+2) << endl;
	cout << "q[2]   = " << q[2]   << endl;

	cout << "q[i]   = " << q[i] << endl;
	cout << "i[q]   = " << i[q] << endl;   //   <-- Proszę to wyjaśnić

	i++;
	cout << "*(i+q)   = " << *(i+q) << endl;

// Wyjaśnienie:
    // i[q] jest równoważne *(i+q), czyli wartości elementu tablicy o indeksie i+q
    // Ponieważ dodawanie jest przemienne, to i+q jest takie samo jak q+i
    // Zatem i[q] jest takie samo jak q[i], czyli wartości elementu tablicy o indeksie i
    // W tym przypadku i[q] jest równe 44, ponieważ i jest równe 3, a q wskazuje na początek tablicy

	return 0;
}

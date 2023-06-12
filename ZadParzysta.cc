#include <iostream>
using namespace std;


bool parzysta_bitowa(int n) {
  return (n & 1) == 0;
}

bool parzysta_modulo(int n) {
  return (n % 2) == 0; 
}

bool parzysta_warunkowa(int n) {
  return (n & 1) ? false : true; 
}

int main() {
  int x;
  cout << "Podaj liczbę: ";
  cin >> x;
  
  cout << "Funkcja (a): ";
  if (parzysta_bitowa(x)) {
    cout << "Liczba " << x << " jest parzysta.\n";
  }
  else {
    cout << "Liczba " << x << " jest nieparzysta.\n";
  }
  
  cout << "Funkcja (b): ";
  if (parzysta_modulo(x)) {
    cout << "Liczba " << x << " jest parzysta.\n";
  }
  else {
    cout << "Liczba " << x << " jest nieparzysta.\n";
  }
  
   cout << "Funkcja (c): ";
   if (parzysta_warunkowa(x)) {
     cout << "Liczba " << x << " jest parzysta.\n";
   }
   else {
     cout << "Liczba " << x << " jest nieparzysta.\n";
   }
  
   return 0;
}

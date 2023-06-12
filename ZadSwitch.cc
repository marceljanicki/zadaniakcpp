#include <iostream>
#include <string>
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


int wybierz_funkcje(string nazwa) {
  if (nazwa == "bitowa") {
    return 1; 
  }
  else if (nazwa == "modulo") { 
    return 2; 
  }
  else if (nazwa == "warunkowa") { 
    return 3;
  }
  else {
    return -1;
  }
}

int main() {
  int x;
  cout << "Podaj liczbę: ";
  cin >> x;
  
  string wybor;
  cout << "Wybierz funkcję do sprawdzenia parzystości:\n";
  cout << "bitowa - Funkcja (a) z operacją bitową\n";
  cout << "modulo - Funkcja (b) z resztą z dzielenia\n";
  cout << "warunkowa - Funkcja (c) z operatorem warunkowym\n";
  cin >> wybor;
  

  switch (wybierz_funkcje(wybor)) {
    case 1: 
      if (parzysta_bitowa(x)) {
        cout << "Liczba " << x << " jest parzysta.\n";
      }
      else {
        cout << "Liczba " << x << " jest nieparzysta.\n";
      }
      break;
    case 2: 
      if (parzysta_modulo(x)) {
        cout << "Liczba " << x << " jest parzysta.\n";
      }
      else {
        cout << "Liczba " << x << " jest nieparzysta.\n";
      }
      break; 
    case 3: 
      if (parzysta_warunkowa(x)) {
        cout << "Liczba " << x << " jest parzysta.\n";
      }
      else {
        cout << "Liczba " << x << " jest nieparzysta.\n";
      }
      break; 
    default:
      cout << "Nieprawidłowy wybór. Spróbuj ponownie.\n";
      break; 
  }
  
   return 0;
}

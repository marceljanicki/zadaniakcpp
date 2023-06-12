#include <iostream>
using namespace std;

union Dane {
  int liczba; 
  char znak; 
  double ulamek;
};

int main() {
  
  Dane d1; 
  
  d1.liczba = 10; 
  cout << "Wartość zmiennej liczba: " << d1.liczba << "\n";
  
  d1.znak = 'A';
  cout << "Wartość zmiennej znak: " << d1.znak << "\n";
  
  d1.ulamek = 3.14;
  cout << "Wartość zmiennej ulamek: " << d1.ulamek << "\n";
  
  cout << "Niepoprawne wartości zmiennych liczba i znak: " << d1.liczba << ", " << d1.znak << "\n"; 
  
   return 0;
}

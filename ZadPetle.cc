#include <iostream>
using namespace std;

void petla_while() {
  int i = 0; 
  while (i < 10) { 
    cout << "i = " << i << "\n";
    if (i == 5) { 
      cout << "Przerwanie pętli while\n";
      break;
    }
    i++;
  }
}


void petla_do_while() {
  int i = 0; 
  do { 
    cout << "i = " << i << "\n"; 
    if (i == 3) { 
      cout << "Kontynuacja pętli do-while\n";
      i++; 
      continue; 
    }
    ++i;
  } while (i < 10);
}


void petla_for() {
  for (int i = 0; i < 10; i++) { 
    cout << "i = " << i << "\n"; 
    if (i == 7) { 
      cout << "Zakończenie funkcji petla_for\n"; 
      return; 
    }
  }
}

int main() {
  
  cout << "Wywołanie funkcji petla_while:\n";
  petla_while();
  
  cout << "Wywołanie funkcji petla_do_while:\n";
  petla_do_while();
  
  cout << "Wywołanie funkcji petla_for:\n";
  petla_for();
  
   return 0;
}

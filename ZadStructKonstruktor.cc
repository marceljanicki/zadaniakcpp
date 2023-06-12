#include <iostream>
using namespace std;


struct Punkt {
  int x; 
  int y;
  
 
  Punkt() {
    cout << "Wywołano domyślny konstruktor struktury Punkt\n";
    x = 0;
    y = 0;
  }
  
  Punkt(int x, int y) {
    cout << "Wywołano konstruktor struktury Punkt z argumentami\n";
    this->x = x; 
    this->y = y; 
  }
  
  ~Punkt() {
    cout << "Wywołano domyślny destruktor struktury Punkt\n";
  }
  
  void pokaz() {
    cout << "x = " << x << ", y = " << y << "\n";
  }
};

int main() {
  
  Punkt p1; 
  p1.pokaz();
  
  Punkt p2(10, 20); 
  p2.pokaz(); 
  
   return 0;
}

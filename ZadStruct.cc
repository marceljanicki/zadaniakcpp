#include <iostream>
using namespace std;

struct Punkt {
  int x;
  int y; 
  

  Punkt(int x, int y) {
    this->x = x; 
    this->y = y; 
  }
  

  Punkt(int a) : x(a), y(a) {}
  
  void pokaz() {
    cout << "x = " << x << ", y = " << y << "\n"; 
  }
};

int main() {
  
  Punkt p1(10, 20); 
  p1.pokaz(); 
  
  Punkt p2(5); 
  p2.pokaz();
  
  p1.x = 15;
  p1.y = 25;
  
  cout << "Nowe wartości obiektu p1: ";
  p1.pokaz();
  
  return 0;
}

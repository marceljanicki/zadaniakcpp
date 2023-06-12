#include <iostream>
using namespace std;


#define PI 3.14 // Stała PI
#define MAX(a, b) ((a) > (b) ? (a) : (b)) 
#define CONCAT(x, y) x ## y 
#define STR(x) #x 

#ifdef PI
  cout << "PI jest zdefiniowane jako " << PI << "\n";
#else
  cout << "PI nie jest zdefiniowane.\n";
#endif

#ifndef E
  cout << "E nie jest zdefiniowane.\n";
#else
  cout << "E jest zdefiniowane jako " << E << "\n";
#endif

int main() {
  
  int a = 5;
  int b = 7;
  cout << "Większa z liczb " << a << " i " << b << " to " << MAX(a, b) << "\n";
  
  int xy = 10;
  cout << "Wartość zmiennej CONCAT(x, y) to " << CONCAT(x, y) << "\n";
  
  cout << "Wartość makra STR(Hello) to " << STR(Hello) << "\n";
  
   return 0;
}

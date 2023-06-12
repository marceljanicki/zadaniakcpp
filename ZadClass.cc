#include <iostream>
using namespace std;

class Osoba {
  public: 
    Osoba(string imie, string nazwisko, int wiek) {
      this->imie = imie; 
      this->nazwisko = nazwisko;
      this->wiek = wiek;
    }
    
    void pokaz_dane();
    
    void zmien_imie(string nowe_imie) {
      imie = nowe_imie; 
    }
    
    string zwroc_imie() {
      return imie;
    }
    
  private:
    string imie;
    string nazwisko; 
    
  protected:
    int wiek;
};

void Osoba::pokaz_dane() {
  cout << "Imię: " << imie << "\n"; 
  cout << "Nazwisko: " << nazwisko << "\n"; 
  cout << "Wiek: " << wiek << "\n";
}

int main() {
  
  Osoba o1("Jan", "Kowalski", 25);
  
  o1.pokaz_dane();
  
  o1.zmien_imie("Adam");
  
  cout << "Nowe imię: " << o1.zwroc_imie() << "\n";
  
   return 0;
}

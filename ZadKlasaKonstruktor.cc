#include <iostream>
using namespace std;


class Osoba {
  public: 
    Osoba() {
      cout << "Wywołano domyślny konstruktor klasy Osoba\n";
      imie = "Brak";
      nazwisko = "Brak";
      wiek = 0;
    }
    
    Osoba(string imie, string nazwisko, int wiek) : imie(imie), nazwisko(nazwisko), wiek(wiek) {
      cout << "Wywołano konstruktor klasy Osoba z argumentami\n"; 
    }
    
    ~Osoba() {
      cout << "Wywołano domyślny destruktor klasy Osoba\n";
    }
    
    void pokaz_dane() {
      cout << "Imię: " << imie << "\n";
      cout << "Nazwisko: " << nazwisko << "\n";
      cout << "Wiek: " << wiek << "\n";
    }
    
  private:
    string imie;
    string nazwisko;
    
  protected:
    int wiek;
};

int main() {
  
  Osoba o1;
  
  o1.pokaz_dane();
  
  Osoba o2("Jan", "Kowalski", 25);
  
  o2.pokaz_dane();
  
   return 0;
}

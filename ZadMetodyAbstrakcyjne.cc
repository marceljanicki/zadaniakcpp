#include <iostream>
#include <cmath>
using namespace std;


class Figura {
  public: 
    
    virtual void Narysuj() = 0;
    
    virtual double Obwod() = 0;
    
    virtual double Pole() = 0;

};


class Trojkat : public Figura {
  private: 
    double a; 
    double b; 
    double c;
    
  public: 

    Trojkat(double a, double b, double c) {
      this->a = a; 
      this->b = b; 
      this->c = c; 
    }

    void Narysuj() {
      cout << "Przepis na narysowanie trojkata\n";
    }
    
   
    double Obwod() {
      return a + b + c;
    }
    
   
    double Pole() {
      double p = Obwod() / 2; 
      return sqrt(p * (p - a) * (p - b) * (p - c)); 
    }
};


class Kwadrat : public Figura {
  private:
    double a; 
    
  public:

    Kwadrat(double a) {
      this->a = a; 
    }
    
    
    void Narysuj() {
      cout << "Przepis na narysowanie kwadrata\n";
    }
    
    
    double Obwod() {
      return 4 * a; 
    }
    

    double Pole() {
      return a * a; 
    }
};


class Prostokat : public Figura {
  private:
    double a; 
    double b; 
    
  public:

    Prostokat(double a, double b) {
      this->a = a; 
      this->b = b;
    }
    
  
    void Narysuj() {
      cout << "Przepis na narysowanie prostokata\n";
    }
    

    double Obwod() {
      return 2 * (a + b); 
    }
    

    double Pole() {
      return a * b; 
    }
};

class Kolo : public Figura {
  private: 
    double r; 
    
  public:
   
    Kolo(double r) {
      this->r = r; 
    }
    
   
    void Narysuj() {
      cout << "Przepis na narysowanie kola\n"; 
    }
    
    double Obwod() {
      return 2 * M_PI * r; 
    }
    
    double Pole() {
      return M_PI * r * r; 
    }
    
    double Dystans(double przestrzen) {
      double pole_na_osobe = Pole() / przestrzen;
      return sqrt(pole_na_osobe / M_PI); 
    };
};

int main() {
  
  Figura *f1 = new Trojkat(3, 4, 5); 
  
  f1->Narysuj(); 
  

  cout << "Pole trójkąta: " << f1->Pole() << "\n"; 
  
  Figura *f2 = new Kwadrat(4);
  
  f2->Narysuj();
  
  cout << "Obwód kwadratu: " << f2->Obwod() << "\n";
  cout << "Pole kwadratu: " << f2->Pole() << "\n"; 
  
  Figura *f3 = new Prostokat(3, 5);
  
  f3->Narysuj(); 
  cout << "Obwód prostokąta: " << f3->Obwod() << "\n";
  cout << "Pole prostokąta: " << f3->Pole() << "\n"; 
  
  Figura *f4 = new Kolo(2); 
  
  f4->Narysuj();
  
  cout << "Obwód koła: " << f4->Obwod() << "\n";
  cout << "Pole koła: " << f4->Pole() << "\n";
  
  cout << "Dystans między osobami przy przestrzeni 4 m^2: " << f4->Dystans(4) << "\n"; 
}
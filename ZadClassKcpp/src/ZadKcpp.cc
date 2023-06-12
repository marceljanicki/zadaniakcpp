#include "ZadKcpp.h" // Dołączenie pliku nagłówkowego z deklaracją klasy ZadKcpp

// Definicja metody Menu poza klasą ZadKcpp
void ZadKcpp::Menu() {
  int sekcja; // Zmienna przechowująca numer sekcji
  int numer; // Zmienna przechowująca numer zadania w sekcji
  
  cout << "Witaj w programie z zadaniami z KCPP\n";
  cout << "Wybierz sekcję i numer zadania do wywołania\n";
  cout << "Sekcje:\n";
  cout << "1. Podstawy\n";
  cout << "2. Funkcje\n";
  cout << "3. Operatory\n";
  cout << "4. Pętle\n";
  cout << "5. Wskaźniki i referencje\n";
  
  cin >> sekcja; // Wczytanie numeru sekcji od użytkownika
  
  switch (sekcja) { // Instrukcja switch wybierająca zadania w zależności od numeru sekcji
    case 1: // Jeśli sekcja jest równa 1, wyświetl zadania z sekcji Podstawy
      cout << "Zadania z sekcji Podstawy:\n";
      cout << "1. Hello World\n";
      cin >> numer; // Wczytanie numeru zadania od użytkownika
      if (numer == 1) { // Jeśli numer jest równy 1, wywołaj metodę Zadanie_1_1
        Zadanie_1_1();
      }
      else { // W przeciwnym razie, wyświetl komunikat o błędzie
        cout << "Nieprawidłowy numer zadania. Spróbuj ponownie.\n";
      }
      break; // Zakończ instrukcję switch
      
    case 2: // Jeśli sekcja jest równa 2, wyświetl zadania z sekcji Funkcje
      cout << "Zadania z sekcji Funkcje:\n";
      cout << "2. Silnia\n";
      cin >> numer; // Wczytanie numeru zadania od użytkownika
      if (numer == 2) { // Jeśli numer jest równy 2, wywołaj metodę Zadanie_2_2
        Zadanie_2_2();
      }
      else { // W przeciwnym razie, wyświetl komunikat o błędzie
        cout << "Nieprawidłowy numer zadania. Spróbuj ponownie.\n";
      }
      break; // Zakończ instrukcję switch
      
    case 3: // Jeśli sekcja jest równa 3, wyświetl zadania z sekcji Operatory
      cout << "Zadania z sekcji Operatory:\n";
      cout << "3. Parzystość z operacją bitową\n";
      cin >> numer; // Wczytanie numeru zadania od użytkownika
      if (numer == 3) { // Jeśli numer jest równy 3, wywołaj metodę Zadanie_3_3
        Zadanie_3_3();
      }
      else { // W przeciwnym razie, wyświetl komunikat o błędzie
        cout << "Nieprawidłowy numer zadania. Spróbuj ponownie.\n";
      }
      break; // Zakończ instrukcję switch
      
    case 4: // Jeśli sekcja jest równa 4, wyświetl zadania z sekcji Pętle
      cout << "Zadania z sekcji Pętle:\n";
      cout << "4. Pętla for\n";
      cin >> numer; // Wczytanie numeru zadania od użytkownika
      if (numer == 4) { // Jeśli numer jest równy 4, wywołaj metodę Zadanie_4_4
        Zadanie_4_4();
      }
      else { // W przeciwnym razie, wyświetl komunikat o błędzie
        cout << "Nieprawidłowy numer zadania. Spróbuj ponownie.\n";
      }
      break; // Zakończ instrukcję switch
      
    case 5: // Jeśli sekcja jest równa 5, wyświetl zadania z sekcji Wskaźniki i referencje
      cout << "Zadania z sekcji Wskaźniki i referencje:\n";
      cout << "5. Wskaźniki i referencje\n";
      cin >> numer; // Wczytanie numeru zadania od użytkownika
      if (numer == 5) { // Jeśli numer jest równy 5, wywołaj metodę Zadanie_5_5
        Zadanie_5_5();
      }
      else { // W przeciwnym razie, wyświetl komunikat o błędzie
        cout << "Nieprawidłowy numer zadania. Spróbuj ponownie.\n";
      }
      break; // Zakończ instrukcję switch
      
    default: // Jeśli sekcja nie jest równa żadnej z powyższych wartości, wyświetl komunikat o błędzie
      cout << "Nieprawidłowy numer sekcji. Spróbuj ponownie.\n";
      break; // Zakończ instrukcję switch
  }
}

// Definicja metody Zadanie_1_1 poza klasą ZadKcpp
void ZadKcpp::Zadanie_1_1() {
  cout << "Hello World\n"; // Wyświetlenie napisu Hello World
}

// Definicja metody Zadanie_2_2 poza klasą ZadKcpp
void ZadKcpp::Zadanie_2_2() {
  int n; // Zmienna przechowująca liczbę n
  int silnia = 1; // Zmienna przechowująca silnię liczby n
  
  cout << "Podaj liczbę n: "; // Wyświetlenie komunikatu
  cin >> n; // Wczytanie liczby n od użytkownika
  
  for (int i = 1; i <= n; i++) { // Pętla for obliczająca silnię liczby n
    silnia = silnia * i; // Mnożenie dotychczasowej wartości silni przez kolejną liczbę od 1 do n
  }
  
  cout << "Silnia liczby " << n << " wynosi " << silnia << "\n"; // Wyświetlenie wyniku obliczeń
}

// Definicja metody Zadanie_3_3 poza klasą ZadKcpp
void ZadKcpp::Zadanie_3_3() {
  int x; // Zmienna przechowująca liczbę x
  
    cout << "Podaj liczbę x: "; // Wyświetlenie komunikatu
  cin >> x; // Wczytanie liczby x od użytkownika
  
  if (x & 1) { // Jeśli liczba x ma ustawiony najmłodszy bit na 1, oznacza to, że jest nieparzysta
    cout << "Liczba " << x << " jest nieparzysta\n"; // Wyświetlenie komunikatu
  }
  else { // W przeciwnym razie, liczba x jest parzysta
    cout << "Liczba " << x << " jest parzysta\n"; // Wyświetlenie komunikatu
  }
}

// Definicja metody Zadanie_4_4 poza klasą ZadKcpp
void ZadKcpp::Zadanie_4_4() {
  int n; // Zmienna przechowująca liczbę n
  
  cout << "Podaj liczbę n: "; // Wyświetlenie komunikatu
  cin >> n; // Wczytanie liczby n od użytkownika
  
  for (int i = 0; i < n; i++) { // Pętla for wykonująca się n razy
    cout << "To jest pętla for\n"; // Wyświetlenie komunikatu
  }
}

// Definicja metody Zadanie_5_5 poza klasą ZadKcpp
void ZadKcpp::Zadanie_5_5() {
  int a = 10; // Zmienna przechowująca liczbę a
  int *p = &a; // Wskaźnik przechowujący adres zmiennej a
  int &r = a; // Referencja przechowująca alias zmiennej a
  
  cout << "Wartość zmiennej a: " << a << "\n"; // Wyświetlenie wartości zmiennej a
  cout << "Adres zmiennej a: " << &a << "\n"; // Wyświetlenie adresu zmiennej a
  cout << "Wartość wskaźnika p: " << p << "\n"; // Wyświetlenie wartości wskaźnika p (adresu zmiennej a)
  cout << "Adres wskaźnika p: " << &p << "\n"; // Wyświetlenie adresu wskaźnika p
  cout << "Wartość wskazywana przez p: " << *p << "\n"; // Wyświetlenie wartości wskazywanej przez p (wartości zmiennej a)
  cout << "Wartość referencji r: " << r << "\n"; // Wyświetlenie wartości referencji r (wartości zmiennej a)
  cout << "Adres referencji r: " << &r << "\n"; // Wyświetlenie adresu referencji r (adresu zmiennej a)
  
  *p = 20; // Zmiana wartości wskazywanej przez p na 20
  
  cout << "Po zmianie wartości wskazywanej przez p:\n";
  
  cout << "Wartość zmiennej a: " << a << "\n"; // Wyświetlenie wartości zmiennej a (zmienionej na 20)
  cout << "Wartość wskazywana przez p: " << *p << "\n"; // Wyświetlenie wartości wskazywanej przez p (zmienionej na 20)
  cout << "Wartość referencji r: " << r << "\n"; // Wyświetlenie wartości referencji r (zmienionej na 20)
  
  r = 30; // Zmiana wartości referencji r na 30
  
   cout << "Po zmianie wartości referencji r:\n";
   
   cout << "Wartość zmiennej a: " << a << "\n"; // Wyświetlenie wartości zmiennej a (zmienionej na 30)
   cout << "Wartość wskazywana przez p: " << *p << "\n"; // Wyświetlenie wartości wskazywanej przez p (zmienionej na 30)
   cout << "Wartość referencji r: " << r << "\n"; // Wyświetlenie wartości referencji r (zmienionej na 30)
}

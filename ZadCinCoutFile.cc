#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Witaj, to jest program pokazujacy funkcjonalnosc strumieni wejscia/wyjscia." << endl;

    cerr << "To jest przykladowy komunikat bledu." << endl;

    ofstream plikWy("plikWy.txt"); 
    if (plikWy.is_open()) 
    {
        plikWy << "To jest tekst zapisany do pliku." << endl;
        plikWy.close(); 
    }
    else 
    {
        cerr << "Nie udalo sie otworzyc pliku do zapisu." << endl;
    }

   
    ifstream plikWe("plikWe.txt");
    if (plikWe.is_open()) 
    {
        string linia;
        while (getline(plikWe, linia))
        {
            cout << linia << endl; 
        }
        plikWe.close(); 
    }
    else
    {
        cerr << "Nie udalo sie otworzyc pliku do odczytu." << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float x = 3.14159; 
    float y = 2.71828; 
    float z = 1.41421; 
    float w = 16.0; 
    float avg = (y + z + w) / 3; 

    cout << "==================================================" << endl;
    cout << "Wynik naszego dzialania: " << x << " jest niepoprawny ale:" << endl;
    cout << setw(10) << "output:" << setw(10) << fixed << setprecision(3) << y 
         << setw(5) << "T:" << setw(7) << scientific << setprecision(3) << y << endl;
    cout << setw(10) << "output1:" << setw(10) << fixed << setprecision(4) << z 
         << setw(5) << "T:" << setw(7) << scientific << setprecision(5) << z << endl;
    cout << setw(10) << "output2:" << setw(10) << fixed << setprecision(4) << w 
         << setw(5) << "T:" << setw(7) << scientific << setprecision(6) << avg << endl;

cout << setw(41) << setfill('-')<< ""<< endl;
cout.fill(' '); 
cout<< setw(10)<< "average:"<< setw(10)<< fixed<< setprecision(4)<< avg
<< setw(5)<< "T:"<< setw(7)<< scientific<< setprecision(6)<< avg<< endl;
cout<< "=================================================="<< endl;

return 0;
}

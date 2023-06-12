#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int a = 10;
    double b = 3.14;
    string c = "Hello";
    stringstream ss;

    ss << a << " " << b << " " << c;

    cout << "Zawartosc obiektu stringstream: " << ss.str() << endl;

    int x;
    double y;
    string z;

    ss >> x >> y >> z;

    cout << "Wartosci pobranych zmiennych: " << x << " " << y << " " << z << endl;

    return 0;
}

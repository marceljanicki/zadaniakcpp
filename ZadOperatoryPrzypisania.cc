#include <iostream>
using namespace std;

void operatoryArytmetyczne();
void operatoryPrzypisania();

int main()
{
    operatoryArytmetyczne();
    operatoryPrzypisania();

    return 0;
}

void operatoryArytmetyczne()
{
    int a = 10, b = 3;
    double c = 3.14, d = 2.71;


    cout << "Wartosci zmiennych przed operacjami:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;

    cout << "Wyniki operacji arytmetycznych:" << endl;
    cout << "a + b = " << a + b << endl; 
    cout << "a - b = " << a - b << endl; 
    cout << "a * b = " << a * b << endl; 
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl; 
    cout << "-a = " << -a << endl; 
    cout << "c + d = " << c + d << endl; 
    cout << "c - d = " << c - d << endl; 
    cout << "c * d = " << c * d << endl; 
    cout << "c / d = " << c / d << endl; 
}


void operatoryPrzypisania()
{

    int a = 10, b = 3;
    double c = 3.14, d = 2.71;

    
    cout << "Wartosci zmiennych przed operacjami:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << endl;

    cout << "Wyniki operacji przypisania:" << endl;
    cout << "a += b: a = " << a << ", b = " << b << endl;

    a -= b; 
    cout << "a -= b: a = " << a << ", b = " << b << endl;

    a *= b;
    cout << "a *= b: a = " << a << ", b = " << b << endl;

    a /= b;
    cout << "a /= b: a = " << a << ", b = " << b << endl;

    a %= b; 
    cout << "a %= b: a = " << a << ", b = " << b << endl;

    
}


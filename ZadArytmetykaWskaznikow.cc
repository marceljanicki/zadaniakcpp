#include <iostream>
using namespace std;

void funkcja1();
void funkcja2();

int main()
{
    cout << "Funkcja 1:" << endl;
    funkcja1();

    cout << "Funkcja 2:" << endl;
    funkcja2();

    return 0;
}


void funkcja1()
{

    int tab[] = {10, 20, 30, 40, 50};
    int *p = tab;


    cout << "Przed operacjami: p = " << p << ", *p = " << *p << endl;

    p++; 
    cout << "Po p++: p = " << p << ", *p = " << *p << endl;

    ++p; 
    cout << "Po ++p: p = " << p << ", *p = " << *p << endl;

    ++*p; 
    cout << "Po ++*p: p = " << p << ", *p = " << *p << endl;

    ++(*p); 
    cout << "Po ++(*p): p = " << p << ", *p = " << *p << endl;

    ++*(p); 
    cout << "Po ++*(p): p = " << p << ", *p = " << *p << endl;

    *p++; 
    cout << "Po *p++: p = " << p << ", *p = " << *p << endl;

    (*p)++; 
    cout << "Po (*p)++: p = " << p << ", *p = " << *p << endl;

    *(p)++;
    cout << "Po *(p)++: p = " << p << ", *p = " << *p << endl;

    *++p;
    cout << "Po *++p: p = " << p << ", *p = " << *p << endl;

    *(++p);
    cout << "Po *(++p): p = " << p << ", *p = " << *p << endl;
}

void funkcja2()
{

    int a = 0, b = 0, c = 0;
    int *pa = &a, *pb = &b, *pc = &c;

    cout <<"1. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    *pa = 10; 
    cout <<"2. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    *pb = *pa + 10; 
    cout <<"3. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    *pa = *pb + 10; 
    cout <<"4. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    *pc = *pa + *pb; 
    cout <<"5. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    (*pb)++; 
    cout <<"6. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    (*pc) = (*pb) + (*pa);
    cout <<"7. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    ++(*pb);
    cout <<"8. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    ++*pa;
    cout <<"9. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;

    ++(*pa);
    cout <<"10. A, B, C: "<< a <<" "<< b <<" "<< c<<endl;
}

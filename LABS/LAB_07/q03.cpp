#include<iostream>
using namespace std;

int main(){
    double a = 1.5;
    int b = 2;
    char c = 'k';

    double *pA = &a;
    int *pB = &b;
    char *pC = &c;

    cout << "Address of variable a: " << &a << endl; /////x
    cout << "Value of variable a: " << a << endl;
    cout << "memory size of variable a: " << sizeof(a) << endl
         << endl;
    cout << "Address of variable pA: " << &pA << endl; 
    cout << "Value of variable pA: " << pA << endl; /////x
    cout << "memory size of variable pA: " << sizeof(pA) << endl
         << endl;
    cout << "Address of variable b: " << &b << endl;
    cout << "Value of variable b: " << b << endl;
    cout << "memory size of variable b: " << sizeof(b) << endl
         << endl;
    cout << "Address of variable pB: " << &pB << endl;
    cout << "Value of variable pB: " << pB << endl;
    cout << "memory size of variable pB: " << sizeof(pB) << endl
         << endl;
    cout << "Address of variable c: " << &c << endl;
    cout << "Value of variable c: " << c << endl;
    cout << "memory size of variable c: " << sizeof(c) << endl
         << endl;
    cout << "Address of variable pC: " << &pC << endl;
    cout << "Value of variable pC: " << pC << endl;
    cout << "memory size of variable pC: " << sizeof(pC) << endl
         << endl;

    return 0;
}
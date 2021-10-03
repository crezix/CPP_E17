#include<iostream>
using namespace std;



int main(){
    int a = 10, b = 25;
    a = a++ + b++;
    b = ++a + ++b;

    cout << a << endl
         << b << endl;
}
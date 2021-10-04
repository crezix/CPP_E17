#include<iostream>
using namespace std;

class Anonymous{
    public:
        static int n;
        Anonymous() { n++; }
        ~Anonymous() { n--; }
};

int Anonymous::n = 0; //n =0

int main(){
    Anonymous a; //n = n+1 =1
    Anonymous b[5]; // This will repeat n = n+1 for five times as there are five objects constructed. Then finally n will be 6
    Anonymous *c = new Anonymous(); // n = n+1 = 7

    cout << a.n << endl; // 7
    cout << b[3].n << endl; // 7
    cout << c->n << endl; // 7

    delete c;// n= n-1 =6 as destructor is called once.
    cout << Anonymous::n << endl; // 6
    return 0;
}
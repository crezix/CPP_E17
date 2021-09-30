#include<iostream>
#include<iomanip>
using namespace std;

void factorial(int n){
    int fact = 1;

    cout << "Integer" << setw(30) << "Factorial" << endl;

    for (int i = 1; i < n;i++){
        fact = fact * i;
        cout <<"  "<< i << setw(30) << fact << endl;
    }
}

int main(){
    factorial(12); //max=12

    return 0;
}

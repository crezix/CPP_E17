#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num1Rem;
    int num2Rem;

    cout << "Enter the number 1: ";
    cin >> num1;
    cout << "Enter the number 2: ";
    cin >> num2;

    if(num1>num2){
        cout << "Number 1 is greater than Number 2.";
    }
    else if(num2>num1){
        cout << "Number 2 is greater than Number 1.";
    }
    else{
        cout<<"Number 1 is equal to Number 2.";
    }
    cout << "\n";

    num1Rem = num1 % 2;
    num2Rem = num2 % 2;

    if(num1Rem==0){
        cout << "Number 1 is EVEN.";
    }
    else{
        cout << "Number 1 is ODD.";
    }
    cout << endl;
    if (num2Rem == 0)
    {
        cout << "Number 2 is EVEN.";
    }
    else{
        cout << "Number 2 is ODD.";
    }
    cout << endl;

    return 0;
}
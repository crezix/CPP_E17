#include<iostream>
using namespace std;

int number = 102;

void func(){
    int number = 103;
    cout <<"This is the local variable in the func function: " <<number << endl;
}

int main(){
    int number = 104;
    func();

    cout << "This is the local variable in main function: " << number << endl;
    cout << "This is the global variable: " << ::number << endl;

    return 0;
}

//Inside a function, if we call a variable name, it will first look in the local scope and if there is no such variable, it will go for the global scope. 
//To directly access the global scope we can use ::
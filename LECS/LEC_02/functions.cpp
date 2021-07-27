#include<iostream>
using namespace std;

void voidFunction(){
    cout << "This is a void function" << endl;
}

int fruitfullFunction(){
    int val = 100;
    return val;
}


int main(){
    voidFunction();

    int gained = fruitfullFunction();
    cout << gained << endl;
}
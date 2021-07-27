#include<iostream>
using namespace std;

int main(){
    int assigned = 10;
    int notAssigned;

    cout << "Value assigned variable: " << assigned << endl;
    cout << "Not assigned variable: " << notAssigned << endl;

    //Assigning a Value
    notAssigned = assigned + 5;
    cout << "Not assigned variable after assigning: " << notAssigned << endl;

    return 0;
}
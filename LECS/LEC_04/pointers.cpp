// my first pointer
#include <iostream> 
using namespace std; 




int main (){
    int firstValue, secondValue; //Defining two integers

    cout << &firstValue << endl
         << &secondValue << endl;

    int * myPointer; //Defining a pointer for integers
    myPointer = &firstValue; //Referring the first variable to the pointer. This set the pointer value to the address of first variable
    *myPointer = 10; //Setting the integer value of pointed address to 10> Then fisrtValue=10
    myPointer = &secondValue; //Referring the second variable to the pointer. This set the pointer value to the address of first variable
    *myPointer = 20; //Setting the integer value of pointed address to 20> Then secondValue=20
    cout << "first value is " << firstValue << endl;
    cout << "second value is " << secondValue << endl;
    return 0;
}
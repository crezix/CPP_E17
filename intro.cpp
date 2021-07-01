#include<iostream> //importing the input and output library
#include<string> // importing string library
using namespace std; //using the standard namespace

//main function which executes at runtime
int main(){
    int inputNumber;
    string inputString;

    cout << "Enter a number :";
    cin >> inputNumber;

    cout << "input number is "<< inputNumber<< endl;

    cout << "Enter a string :";
    getline(cin, inputString);

    cout << "input string  is "<< inputString<< endl;

    return 0; //as the function is to return an integer
}
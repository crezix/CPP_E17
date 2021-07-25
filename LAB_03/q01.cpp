#include<iostream>
using namespace std;


float addition(float number1, float number2){
    return number1 + number2;
}

float subtraction(float number1, float number2){
    return number1 - number2;
}

float multiplication(float number1, float number2){
    return number1 * number2;
}

float division(float number1, float number2){
    return number1 / number2;
}

int main(){
    float number1, number2;
    int selection;

    cout << "Please enter two numbers\n";
    cin >> number1;
    cin >> number2;

    cout << "Please make a selection\n";
    cout << "1) Addition\n";
    cout << "2) Subtraction\n";
    cout << "3) Multiplication\n";
    cout << "4) Division\n";
    cin >> selection;

    switch(selection){
        case 1:
            cout << "Addition: " << addition(number1, number2);
            break;
        case 2:
            cout << "Subtraction: " << subtraction(number1, number2);
            break;
        case 3:
            cout << "Multiplication: " << multiplication(number1, number2);
            break;
        case 4:
            cout << "Division: " << division(number1, number2);
            break;
        default:
            cout << "Invalid Selection!";
    }
    cout << endl;

    if(number1>number2){
        cout << number1 << " is greater.";
    }
    else if(number2>number1){
        cout << number2 << " is greater.";
    }
    else{
        cout << "Both numbers are equal.";
    }

    cout << endl;

    return 0;
}
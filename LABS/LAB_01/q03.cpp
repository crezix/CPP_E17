#include<iostream>
using namespace std;

int main(){
    float tempInFar;
    float tempInCel;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> tempInFar;

    tempInCel = (tempInFar-32) * 5/9;

    cout << "The temperature is " <<tempInCel<<" Celsius."<< endl;

    return 0;
}
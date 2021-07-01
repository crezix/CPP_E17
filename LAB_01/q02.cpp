#include<iostream>
using namespace std;

int main(){
    float disInFeet;
    float disInInches;

    cout << "Enter the distance in Feet: ";
    cin >> disInFeet;

    disInInches = disInFeet * 12;

    cout << "The distance is " <<disInInches<<" inches."<< endl;

    return 0;
}
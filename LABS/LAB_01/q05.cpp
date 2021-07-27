#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int sum =0;

    cout << "Enter the number 1: ";
    cin >> num1;
    cout << "Enter the number 2: ";
    cin >> num2;

    for (int i = num1; i <= num2;i++){
        sum = sum + i;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}

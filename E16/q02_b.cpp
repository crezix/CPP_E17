#include<iostream>
using namespace std;

// int main(){
//     int val1, val2;
//     int *p1=&val1, *p2=&val2;

//     cout << "Enter 1st Number: ";
//     cin >> val1;
//     cout << "Enter 2nd Number: ";
//     cin >> val2;

//     cout << "Before swapping first number is " << *p1 << endl;
//     cout << "Before swapping second number is " << *p2 << endl;

//     p1 = &val2;
//     p2 = &val1;

//     cout << "After swapping first number is " << *p1 << endl;
//     cout << "After swapping second number is " << *p2 << endl;

//     return 0;
// }

int main(){
    int val1, val2,temp;

    cout << "Enter 1st Number: ";
    cin >> val1;
    cout << "Enter 2nd Number: ";
    cin >> val2;

    cout << "Before swapping first number is " << val1 << endl;
    cout << "Before swapping second number is " << val2 << endl;

    temp = val1;
    val1 = val2;
    val2 = temp;

    cout << "After swapping first number is " << val1 << endl;
    cout << "After swapping second number is " << val2 << endl;

    return 0;
}
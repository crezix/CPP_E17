#include<iostream>
using namespace std;

int main(){
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows;i++){
        for (int spaces = 0; spaces < rows - i;spaces++){
            cout << " ";
        }
        for (int stars = 0; stars < i; stars++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
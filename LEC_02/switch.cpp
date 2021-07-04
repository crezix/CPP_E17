#include<iostream>
using namespace std;

int main(){
    int x;

    cout << "Enter a number: ";
    cin >> x;

    switch(x){
        case 1:
            cout << "x is 1" << endl;
            break;

        case 2:
            cout << "x is 2" << endl;
            break;

        default:
            cout << "x is unknown" << endl;
        }

    return 0;
}

// if there is no break after the expression in the case, programme will be coninued for each and every case
// default case will be run for any other case rather than defined.
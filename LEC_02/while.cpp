#include<iostream>
using namespace std;


int main(){
    int n = 10;
    while(n>0){
        cout << n-- << ',';
    }

    cout << "liftoff!\n";  //cout << "liftoff!" << endl; is also applicable

    return 0;
}

//n-- decrement and returns the past value
//--n decrement and returns the decremented value
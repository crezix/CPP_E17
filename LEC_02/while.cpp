#include<iostream>
using namespace std;


int main(){
    int n = 10;
    while(n>0){
        cout << n << ",";
        --n; //n will be decreased by 1
    }

    cout << "liftoff!\n";  //cout << "liftoff!" << endl; is also applicable

    return 0;
}
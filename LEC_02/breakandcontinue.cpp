#include<iostream>
using namespace std;

int main(){
    int i = 0;

    while(i<20){
        ++i;
        if(i==2){
            continue;
        }
        if(i==10){
            break;
        }

        cout << i << endl;
        
    }

    return 0;
}
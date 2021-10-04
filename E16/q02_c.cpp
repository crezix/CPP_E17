#include<iostream>
using namespace std;


int main(){
    int i = 5;
    int j = i++;

    cout << "i=" << i << " "
         << "j=" << j << endl;
    return 0;
}

//i++ will add 1 to i after assigning. Therefore i will be 6
//j=i++ assign the value of i to j. As ++ is a after i (post increment), it will not affect the assigning process.
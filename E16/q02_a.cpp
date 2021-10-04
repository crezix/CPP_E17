#include<iostream>
using namespace std;

void F(int * A, int * B, int N){
    for (int i = 0; i < N;i++){
        B[i] = 1;
        for (int j = 0; j < N; j++)
        {
            if(i!=j)
                B[i] *= A[j];
        }
    }
}

int main(){
    int arr1[4] = {2,1,5,9};
    int arr2[4];
    
    F(arr1, arr2, 4);

    for (int i = 0; i < 4;i++){
        cout << arr2[i] << endl;
    }

    return 0;
}
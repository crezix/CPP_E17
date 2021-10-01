#include<iostream>
using namespace std;

void reverse(int arr[],int N){
    for (int i = N - 1; i >= 0;i--){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverse(array, 10);

    return 0;
}
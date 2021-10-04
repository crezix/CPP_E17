#include<iostream>
using namespace std;

int * evenArray(int array[], int n){
    int *newArray;
    int j=0;

    for (int i = 0; i < n;i++){
        if(array[i]%2==0){
            cout << array[i] << " ";
            newArray[j] = array[i];
            j++;
        }
    }
    cout << endl;

    return newArray;
}

int main(){
    int oldArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *newArr = evenArray(oldArr, 10);


    return 0;
}
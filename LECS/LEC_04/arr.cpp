#include <iostream> 
using namespace std;

int* insertX(int n, int arr[],int x, int pos){
    int i;
  
    // increase the size by 1
    n++;
  
    // shift elements forward
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
  
    // insert x at pos
    arr[pos - 1] = x;
  
    return arr;
}



int main() {
    int arr[5], i;
    cout << "Size of integer in this compiler is " << sizeof(int) << "\n";
    for (i = 0; i < 5; i++){
        cout << "Address arr["<<i<<"] is " << &arr[i] << "\n";
    }


    // int arr[100] = { 0 };
    // int i, x, pos, n = 10;
  
    // // initial array of size 10
    // for (i = 0; i < 10; i++)
    //     arr[i] = i + 1;
  
    // // print the original array
    // for (i = 0; i < n; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
  
    // // element to be inserted
    // x = 50;
  
    // // position at which element is to be inserted
    // pos = 5;
  
    // // Insert x at pos
    // insertX(n, arr, x, pos);
  
    // // print the updated array
    // for (i = 0; i < n + 1; i++)
    //     cout << arr[i] << " ";
    // cout << endl;


    return 0;
}

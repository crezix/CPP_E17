#include<iostream>
using namespace std;

int main(){
    int arrSize;
    int count = 0;
    float sum = 0;
    float average;
    string element;

    cout << "Enter the size of the array: ";
    cin >> arrSize;

    float arr[arrSize];

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cin >> element;
        if(element=="done")
            break;
        arr[i] = stof(element);
        count++;
    }

    for (int i = 0; i < arrSize; i++)
    {
        sum = sum + arr[i];
    }

    average = sum / count;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
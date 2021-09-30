#include<iostream>
#include<string>
using namespace std;

int main(){
    string names[5];
    double marks[5];

    cout << "Enter names and marks," << endl;

    for (int i = 0; i < 5;i++){
        cout << "Name of Student "<<i+1<<": ";
        getline(cin, names[i]);
        cout << "Marks of Student "<<i+1<<": ";
        cin >> marks[i];
        cin.ignore();
    }

    for (int i = 0; i < 5;i++){
        cout << names[i] << " : " << marks[i]<<endl;
    }

    return 0;
}
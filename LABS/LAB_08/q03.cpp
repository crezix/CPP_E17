#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// Write a program to copy the contents of a file into another file.

int main(){
    string line;

    ifstream myFileIn;
    ofstream myFileOut;
    myFileIn.open("q01.txt");
    myFileOut.open("q03.txt");

    if(myFileIn.is_open()  && myFileOut.is_open()){

        while(!myFileIn.eof()){
            getline(myFileIn, line);
            myFileOut<< line << endl;
        }
        myFileIn.close();
        myFileOut.close();
    }else{
        cout << "One file is not opened\n";
    }

    return 0;
}
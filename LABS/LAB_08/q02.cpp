#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// Write a program to read a text file and display its contents on the screen.

int main(){
    string line;

    fstream myFile;
    myFile.open("q01.txt");

    if(myFile.is_open()){

        while(!myFile.eof()){
            getline(myFile, line);
            cout << line << endl;
        }
    }
    else
    {
        cout << "File is not opened\n";
    }

    return 0;
}
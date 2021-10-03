#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream inFile1, inFile2;
    ofstream outFile;

    string line1, line2;

    inFile1.open("in_file_1.txt");
    inFile2.open("in_file_2.txt");
    outFile.open("out_file.txt");

    if(inFile1.is_open() && inFile2.is_open() && outFile.is_open()){
        while(!inFile1.eof()){
            getline(inFile1, line1);
            getline(inFile2, line2);
            outFile << line1 << " " << line2 << endl;
        }
        inFile1.close();
        inFile2.close();
        outFile.close();
    }
    else{
        cout << "One file is not opened\n";
    }

}
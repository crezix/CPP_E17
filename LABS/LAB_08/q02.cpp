#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string line;

    ifstream myFile;
    myFile.open("q01.txt");

    if(myFile.is_open()){

        while(!myFile.eof()){
            getline(myFile, line);
            cout << line << endl;
        }
        myFile.close();
    }
    else
    {
        cout << "File is not opened\n";
    }

    return 0;
}
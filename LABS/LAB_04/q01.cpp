#include<iostream>
using namespace std;

class MyClass{
    private:

    public:
        int myNum;

        void myMethod(){
            cout << "Hello World" << endl;
        }
};

 int main(){
     MyClass myObj;
     cout << "Before setting: "<<myObj.myNum << endl;
     myObj.myNum = 15;
     cout << "After setting: "<< myObj.myNum << endl;
     myObj.myMethod();
 }
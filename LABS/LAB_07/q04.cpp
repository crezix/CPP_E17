#include<iostream>
using namespace std;

class Parent{
    public:
        virtual void method1()
        {
            cout << "method1 from parent class" << endl;
        }

        void method2(){
            cout << "method2 from parent class" << endl;
        }
};

class Child:public Parent{
    public:
        void method1()
        {
            cout << "method1 from child class" << endl;
        }

        void method2(){
            cout << "method2 from child class" << endl;
        }  
};


int main(){
    Parent *parent;
    Child child;

    parent = &child;

    parent->method1();
    parent->method2();

    return 0;
}
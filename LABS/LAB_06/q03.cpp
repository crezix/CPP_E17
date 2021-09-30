#include<iostream>
using namespace std;

class Triangle{
    public:
        void triangle(){
            cout << "This is Triangle Base Class" << endl;
        }
};

class Isosceles:public Triangle{
    public:
        void isosceles(){
            cout << "This is Isosceles Derived Class" << endl;
        }
};

class Equilateral:public Isosceles{
    public:
        void equilateral(){
            cout << "This is Equilateral Derived Class" << endl;
        }
};

int main(){
    Equilateral obj1;
    Equilateral obj2;

    obj1.equilateral();
    obj2.Isosceles::isosceles();

    return 0;
}
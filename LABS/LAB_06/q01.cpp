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

int main(){
    Isosceles obj;

    obj.isosceles();

    //Accessing base class function from derived class directly.
    obj.triangle();
    //Accessing base class function from the derived class pointing to the base class. This can be used when there are same name functions in both base and derived classes.
    obj.Triangle::triangle();

    return 0;
}
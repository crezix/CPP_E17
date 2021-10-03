#include<iostream>
using namespace std;

class Rectangle{
    private:
        double length,breadth;
    
    public:
        Rectangle(double lengthT, double breadthT){
            length = lengthT;
            breadth = breadthT;
        }

        double Area(){
            return length * breadth;
        }
};

int main(){
    Rectangle rectangle1(4, 5);
    Rectangle rectangle2(5, 8);

    cout << "Ares of first rectangle is " << rectangle1.Area() << endl;
    cout << "Ares of second rectangle is " << rectangle2.Area() << endl;

    return 0;
}
#include<iostream>
using namespace std;

class Rectangle{
    protected: //protected access specifier is used to get access to parent class data members from derived classes but not from objects
        int width, height;
    
    public:
        void display(){
            cout << width << " " << height << endl;
        }
};

class RectangleArea:public Rectangle{
    public:
        void read_input(){
            cout << "Enter the width: ";
            cin >> width;
            cout << "Enter the height: ";
            cin >> height;
        }

        //This is called function overriding. This helps in runtime polymorphism.
        void display(){
            cout << width * height<< endl;
        }
};

int main(){
    RectangleArea rectangleArea;

    rectangleArea.read_input();


    rectangleArea.display();
    rectangleArea.Rectangle::display();

    return 0;
}
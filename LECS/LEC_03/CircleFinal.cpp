#include<iostream>
#include<string>
using namespace std;

//Copy constructor

class Circle{
    private:
        double radius;
        string color;
    
    public:
        // Circle(double radius = 1.0, string color ="red"){
        //     this->radius =radius;
        //     this->color=color;
        // }

        //Member initializer list
        Circle(double r = 1.0, string c = "red") : radius(r), color(c) { }

        ~Circle(){
            cout << "Ended!" << endl;
        }

        

        double getRadius()const{
            return radius;
        }

        string getColor()const{
            return color;
        }

        double getArea()const{
            return radius * radius * 3.1416;
        }

        void setRadius(double radius){
            this->radius=radius;
        }

        void setColor(string color){
            this->color=color;
        }
};


int main(){

    //Creating circle objects
    Circle c1(1.2, "Blue"); //Constructor arguments provided
    Circle c2(3.4); //Default color
    Circle c3;    //Default radius and color
    Circle c4(c1); //Copy constructor

    ////c1
    cout << "c1 Circle (Constructor arguments provided)" << endl;
    cout << "Radius= " << c1.getRadius() << endl;
    cout << "Color= " << c1.getColor() << endl;
    cout << "Area= " << c1.getArea() << endl;
    cout << endl;

     ////c2
    cout << "c2 Circle (Default color)" << endl;
    cout << "Radius= " << c2.getRadius() << endl;
    cout << "Color= " << c2.getColor() << endl;
    cout << "Area= " << c2.getArea() << endl;
    cout << endl;

    ////c3
    cout << "c3 Circle (default radius and color)" << endl;
    cout << "Radius= " << c3.getRadius() << endl;
    cout << "Color= " << c3.getColor() << endl;
    cout << "Area= " << c3.getArea() << endl;
    cout<< endl;

    //c4
    cout << "c4 Circle (Copy of c1)" << endl;
    cout << "Radius= " << c4.getRadius() << endl;
    cout << "Color= " << c4.getColor() << endl;
    cout << "Area= " << c4.getArea() << endl;
    cout<< endl;

    
    //Using setters
    c1.setRadius(10);
    c1.setColor("Yellow");

    ////c1 Modified
    cout << "c1 Circle (Modified using setters)" << endl;
    cout << "Radius= " << c1.getRadius() << endl;
    cout << "Color= " << c1.getColor() << endl;
    cout << "Area= " << c1.getArea() << endl;
    cout << endl;
    

    return 0;
}
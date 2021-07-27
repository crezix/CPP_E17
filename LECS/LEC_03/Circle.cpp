#include<iostream>
#include<string>
using namespace std;

//What is object oriented programming?
//What is a class?
//What are access control modifiers?
//What is Hiding and encapsulation?
//What are getters and setters?
//This keyword usage
//Const usage
//Member initializer list
//Copy constructor

class Circle{
    private:
        double radius;
        string color;
    
    public:
        Circle(double r = 1.0, string c ="red"){
            radius = r;
            //this->radius =r;
            color = c;
            //this->color=c;
        }

        // ~Circle(){
        //     cout << "Ended!" << endl;
        // }

        //Member initializer list
        //Circle(double r = 1.0, string c = "red") : radius(r), color(c) { }

        //double getRadius()const{
        double getRadius(){
            return radius;
        }

        //string getColor()const{
        string getColor(){
            return color;
        }

        //double getArea()const{
        double getArea(){
            return radius * radius * 3.1416;
        }

        void setRadius(double r){
            radius = r;
            //this->radius=r;
        }

        void setColor(string c){
            color = c;
            //this->color=c;
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

    ////c4
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
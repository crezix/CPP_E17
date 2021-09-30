#include<iostream>
#include<string>
using namespace std;


class Circle{
    private:
        double radius;
        string color;
    
    public:
        Circle(double r = 1.0, string c ="red"){
            radius = r;
            color = c; 
        }

        double getRadius(){
            return radius;
        }

        string getColor(){
            return color;
        }

        double getArea(){
            return radius * radius * 3.1416;
        }

        void setRadius(double r){
            radius = r;
        }

        void setColor(string c){
            color = c;
        }
};


int main(){

    Circle c1;

    cout << c1.getRadius();

    return 0;
}
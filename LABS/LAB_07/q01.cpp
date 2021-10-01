#include<iostream>
using namespace std;

class Test{
    public:
        int volume(int edge){
            return edge*edge*edge;
        }

        double volume(double height, int radius){
            return 3.14 * radius * radius * height;
        }

        double volume(double length, int width, int height){
            return length * width * height;
        }
};

int main(){
    Test test;

    cout << test.volume(5)<<endl;
    cout << test.volume(2.5, 3)<<endl;
    cout << test.volume(2.5, 2, 4)<<endl;

    return 0;
}
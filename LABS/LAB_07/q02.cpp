#include<iostream>
using namespace std;

class Complex{
    private:
        int real, imag;

    public:
        Complex(int real=0,int imag=0){
            this->real = real;
            this->imag = imag;
        }

        Complex operator + (Complex num){
            Complex temp;
            temp.real = real + num.real;
            temp.imag = imag + num.imag;

            return temp;
        }

        Complex operator * (Complex num){
            Complex temp;
            temp.real = (real * num.real) - (imag * num.imag);
            temp.imag = (real * num.imag) + (imag * num.real);

            return temp;
        }

        void display(){
            cout << real << "+" << imag << "i" << endl;
        }
};

int main(){
    Complex cNum1(1, 3), cNum2(2, 5), cNum3,cNum4;

    cNum3 = cNum1 + cNum2;
    cNum4 = cNum1 * cNum2;
    cNum3.display();
    cNum4.display();

    return 0;
}
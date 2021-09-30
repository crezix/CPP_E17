#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int Reg_no;
        double total, percentage;
    
    public:
        Student(){}

        void getDetails(){
            cout << "Enter name: ";
            getline(cin, this->name);
            cout<< "Enter registration number: ";
            cin >> this->Reg_no;
            cout << "Enter total: ";
            cin >> this->total;

            this->percentage = ((this->total / 500) * 100);
        }

        void displayDetails(){
            cout
                << "Name: " << name << endl
                << "Registration Number: " << Reg_no << endl
                << "Total: " << total << endl
                << "Percentage: " << percentage << endl;
        }
};

int main(){
    Student student;
    student.getDetails();
    student.displayDetails();
}
#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int Reg_no;
        double total, percentage;
    
    public:
        Student(string name, int Reg_no,double total){
            this->name = name;
            this->Reg_no = Reg_no;
            this->total = total;
            this->percentage = ((total / 500) * 100);
        }

        string getDetails();
        void displayDetails();
};

string Student::getDetails(){
    string details = "Name:" + name +"\nRegistration Number: "+to_string(Reg_no)+"\nTotal: "+to_string(total)+"\nPercentage: "+to_string(percentage);
    return details;
}

void Student::displayDetails(){
    cout<< "Name: " << name << endl<< "Registration Number: " << Reg_no << endl<< "Total: " << total << endl<< "Percentage: " << percentage << endl;
}

int main(){
    Student student("Iresh", 63, 251);
    cout << student.getDetails() << endl<<endl;
    student.displayDetails();
}
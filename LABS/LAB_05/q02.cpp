#include<iostream>
using namespace std;

class Employee{
    private:
        int salary,hours;
    
    public:
        void getInfo(int salary, int hours){
            this->salary = salary;
            this->hours = hours;
        }

        void AddSal(){
            if(salary<500){
                salary += 10;
            }
        }

        void AddWork(){
            if(hours>6){
                salary += 5;
            }
        }

        void getSalary(){
            cout << "Employee's salary: Rs." << salary << endl;
        }
};

int main(){
    Employee employee1;
    Employee employee2;

    employee1.getInfo(495,5);
    employee2.getInfo(500,8);

    employee1.getSalary();
    employee2.getSalary();

    employee1.AddSal();
    employee2.AddSal();

    employee1.AddWork();
    employee2.AddWork();

    employee1.getSalary();
    employee2.getSalary();

    employee1.AddSal();
    employee2.AddSal();

    employee1.AddWork();
    employee2.AddWork();

    employee1.getSalary();
    employee2.getSalary();

    return 0;
}
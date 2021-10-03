#include<iostream>
using namespace std;

// Write a program by creating an 'Employee' class having the following methods and print the final salary.
// 1 - 'getInfo()' which takes the salary and number of hours of work per day of employee as parameter
// 2 - 'AddSal()' which adds 10 to salary of the employee if it is less than 500.
// 3 - 'AddWork()' which adds 5 to salary of employee if the number of hours of work per day is more than 6 hours.

class Employee{
    private:
        int salary,hours;
    
    public:
        void getInfo(int salaryT, int hoursT){
            salary = salaryT;
            hours = hoursT;
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

    // employee1.AddSal();
    // employee2.AddSal();

    // employee1.AddWork();
    // employee2.AddWork();

    // employee1.getSalary();
    // employee2.getSalary();

    return 0;
}
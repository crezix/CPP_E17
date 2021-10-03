#include<iostream>
#include<string>
using namespace std;


class Student{
    private:
        int rollno;
        string name;
    
    public:
        // Student(int rollno,string name){
        //     this->rollno= rollno;
        //     this->name = name;
        // } //This can be altered by a data setting function.

        void getData(){
            cout << "Enter roll number: ";
            cin >> rollno;
            cin.ignore();
            cout << "Enter name: ";
            getline(cin, name);
        }

        void display(){
            cout << "Roll Number: "<<rollno<< "\nName of the student: " << name << endl;
        }
};

class Exam:public Student{
    protected:
        int marks[6];

    public:
        // Exam(int rollno,string name):Student(rollno,name){
            
        // }

        void getMarks(){
            string subjects[6] =  {"Maths","Science","First Language","Second Language", "English", "IT"};
            for (int i = 0;i<6;i++){
                cout << "Enter marks for " << subjects[i] << ": ";
                cin >> marks[i];
            }
        }

        void display(){
            string subjects[6] =  {"Maths","Science","First Language","Second Language", "English", "IT"};
            Student::display();
            cout << "Marks," << endl;
            for (int i = 0; i < 6; i++){
                cout << subjects[i] << ": "<< marks[i]<<endl;
            }
        }
};

class Result:public Exam{
    private:
        int totalMarks;
    
    public:
        // Result(int rollno,string name):Exam(rollno,name){
        //     totalMarks = 0;
        // }

        void calculate(){
            totalMarks = 0;
            for (int i = 0; i < 6; i++)
            {
                totalMarks += marks[i];
            }
        }   

        void display(){
            Exam::display();
            cout << "Total Marks: " << totalMarks<<endl;
        }
};

int main(){
    Result result;
    result.getData();
    result.getMarks();
    result.calculate();
    result.display();
    return 0;
}
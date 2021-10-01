#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
        string name;
        int age;

    public:
        virtual void getData(){

        }

        virtual void putData(){
            
        }
};

class Professor:public Person{
    private:
        int publications;
    
    public:
        void getData(){
            cout << "Enter the name of the professor: ";
            getline(cin, name);
            cout << "Enter the age of the professor: ";
            cin >> age;
            cout << "Enter the number of publications of the professor: ";
            cin >> publications;
            cin.ignore();
        }

        void putData(){
            cout << "Name of the professor: "<<name<<endl;
            cout << "Age of the professor: "<<age<<endl;
            cout << "Number of publications of the professor: "<<publications<<endl;
        }
};

class Student : public Person{
    private:
        int marks[6];

    public:
        void getData(){
            string subjects[6] =  {"Maths","Science","First Language","Second Language", "English", "IT"};

            cout << "Enter the name of the student: ";
            getline(cin, name);
            cout << "Enter the age of the student: ";
            cin >> age;
            for (int i = 0;i<6;i++){
                cout << "Enter marks for " << subjects[i] << ": ";
                cin >> marks[i];
            }
            cin.ignore();
        }

        void putData(){
            string subjects[6] =  {"Maths","Science","First Language","Second Language", "English", "IT"};

            cout << "Name of the student: "<<name<<endl;
            cout << "Age of the student: "<<age<<endl;
            cout << "Marks," << endl;
            for (int i = 0; i < 6; i++){
                cout << subjects[i] << ": "<< marks[i]<<endl;
            }
        }
};


int main(){

    Person *person;
    Professor professor;
    Student student;

    person = &professor;
    person->getData();
    person->putData();

    cout << endl;

    person = &student;
    person->getData();
    person->putData();

    return 0;
}
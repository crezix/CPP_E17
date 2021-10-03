#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student{
    private:
        string name;
        int age;
        string sex;
    
    public:
        Student(){}
        Student(string name, int age,string sex){
            this->name = name;
            this->age = age;
            this->sex = sex;
        }

        void setName(string name){
            this->name=name;
        }

        void setAge(int age){
            this->age=age;
        }

        void setSex(string sex){
            this->sex= sex;
        }

        string getName(){
            return name;
        }

        int getAge(){
            return age;
        }

        string getSex(){
            return sex;
        }
};

Student *student;

void read(){
    student = new Student();
    string name, sex;
    int age;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter sex: ";
    getline(cin, sex);

    student->setName(name);
    student->setAge(age);
    student->setSex(sex);
}

void write(){
    ofstream myFile;
    myFile.open("student.txt");

    if(myFile.is_open()){
        cout << "Writing to student.txt...\n";
        myFile << student->getName() << endl;
        myFile << student->getAge() << endl;
        myFile << student->getSex() << endl;
        myFile.close();
        cout << "student.txt saved!\n";
    }
    else
    {
        cout << "File is not opened\n";
    }
}

void show(){
    string line;
    ifstream myFile;
    myFile.open("student.txt");

    if(myFile.is_open()){
        cout << "Reading student.txt...\n";

        getline(myFile, line);
        cout <<"Name: " <<line << endl;
        getline(myFile, line);
        cout <<"Age: " <<line << endl;
        getline(myFile, line);
        cout <<"Sex: " <<line << endl;
        myFile.close();
    }
    else
    {
        cout << "File is not opened\n";
    }
}


int main(){
    read();
    write();
    show();

    return 0;
}
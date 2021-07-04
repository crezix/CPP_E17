#include<iostream>
#include<string>
using namespace std;

string getGrade(float score){
    string grade;

    if(score>=0 && score<60){
        grade = "Fail";
    }
    else if(score>=60 && score<70){
        grade = "D";
    }
    else if(score>=70 && score<80){
        grade = "C";
    }
    else if(score>=80 && score<90){
        grade = "B";
    }
    else if(score>=90 && score<100){
        grade = "A";
    }
    else{
        grade = "Bad score";
    }
    return grade;
}

int main(){
    float score;

    cout << "Enter score: ";
    cin >> score;
    cout << getGrade(score) << endl;

    return 0;
}
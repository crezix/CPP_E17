#include<iostream>
using namespace std;

class Time{
    private:
        int hours, minutes, seconds;
    
    public:
        Time(){
            hours = 0;
            minutes = 0;
            seconds = 0;
        }

        Time(int hours, int minutes, int seconds){
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }

        Time addTime(Time timeOne, Time timeTwo){
            //(1,20,40) (3,50,30)
            int addedSeconds = timeOne.seconds + timeTwo.seconds; //70
            int addedMinutes = timeOne.minutes + timeTwo.minutes; //70
            int addedHours = timeOne.hours + timeTwo.hours; //4

            if(addedSeconds>60){
                addedSeconds -= 60; //10
                addedMinutes += 1; //71
            }
            
            if(addedMinutes>60){
                
                addedMinutes -= 60;
                addedHours += 1;
            }


            return Time(addedHours, addedMinutes, addedSeconds);
        }

        void display(){
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }

};

int main(){
    const Time time1(1,20,40);
    const Time time2(3,50,30);  //5:11:10
    Time time3;

    time3.display();

    time3 = time3.addTime(time1, time2);

    time3.display();

    return 0;
}
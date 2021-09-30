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

            int addedSeconds = timeOne.seconds + timeTwo.seconds;
            int addedMinutes = timeOne.minutes + timeTwo.minutes;
            int addedHours = timeOne.hours + timeTwo.hours;

            while(addedSeconds>60){
                addedSeconds -= 60;
                addedMinutes += 1;
            }
            
            while(addedMinutes>60){
                
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
    const Time time1= Time(1,20,40);
    const Time time2= Time(3,50,30);
    Time time3;

    time3.display();

    time3 = time3.addTime(time1, time2);

    time3.display();

    return 0;
}
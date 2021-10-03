#include<iostream>
#include<string>
using namespace std;

class Publication{
    private:
        string title;
        float price;

    public:
        void getData(){
            cout << "Enter the title: ";
            getline(cin, title);
            cout << "Enter the price: ";
            cin >> price;
        }

        void putData(){
            cout << "Title: " << title << "\nPrice: Rs." << price << endl;
        }
};

class Book:public Publication{
    private:
        int pageCount;
    
    public:
        void getData(){
            Publication::getData(); //calling the base class function inside the overidden function
            cout << "Enter the page count: ";
            cin >> pageCount;
            cin.ignore();
        }

        void putData(){
            Publication::putData(); //calling the base class function inside the overidden function
            cout << "Page Count: " << pageCount << endl;
        }
};

class Tape:public Publication{
    private:
        float playingTime;

    public:
        void getData(){
            //Publication::getData(); //calling the base class function inside the overidden function
            cout << "Enter the playing time in minutes: ";
            cin >> playingTime;
            cin.ignore();
        }

        void putData(){
            //Publication::putData(); //calling the base class function inside the overidden function
            cout << "Playing Time: " << playingTime<<" minutes" << endl;
        }
};

int main(){
    Book book;
    Tape tape;

    //book.Publication::getData();
    book.getData();
    //book.Publication::putData();
    book.putData();

    //tape.getData();
    //tape.putData();

    return 0;
}
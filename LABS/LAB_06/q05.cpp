#include<iostream>
#include<string>
using namespace std;

class Book{
    private:
        int bookNumber;
        string bookName;

    public:
        void getData(){
            cout << "Enter the book number: ";
            cin >> bookNumber;
            cin.ignore();
            cout << "Enter the book name: ";
            getline(cin, bookName);
            
        }

        void putData(){
            cout << "Book Number: " << bookNumber << "\nBook Name: " << bookName << endl;
        }
};

class FirstDerived:public Book{
    private:
        string author, publisher;

    public:
        void getData(){
            Book::getData();
            cout << "Enter the author's name: ";
            getline(cin, author);
            cout << "Enter the publisher: ";
            getline(cin, publisher);
            
        }

        void showData(){
            Book::putData();
            cout << "Author: " << author << "\nPublisher: " << publisher << endl;
        }
};

class SecondDerived:public Book,FirstDerived{
    private:
        int noOfPages, year;

    public:
        void getData(){
            FirstDerived::getData();
            cout << "Enter number of pages: ";
            cin >> noOfPages;
            cout << "Enter the year of publication: ";
            cin >> year;
        }

        void showData(){
            FirstDerived::showData();
            cout << "Number of pages: " << noOfPages << "\nYear of Publication: " << year << endl;
        }
};

int main(){
    SecondDerived obj;

    return 0;
}
#include<iostream>
#include <cmath>
using namespace std;

class Account{
    private:
        int accountNumber;
        double balance;

    public:
        Account(int accountNumber){
            this->accountNumber = accountNumber;
        }

        int getAccountNumber(){
            return accountNumber;
        }

        double getBalance(){
            return balance;
        }

        void setBalance(double balance){
            this->balance=balance;
        }

        void credit(double amount){
            balance += amount;
        }

        void debit(double amount){
            if(amount>balance){
                cout << "amount withdrawn exceeds the current balance!" << endl;
            }
            else{
                balance -= amount;
            }
        }

        void display(){
            cout << "A/C no: " << accountNumber << " Balance: $" <<round(balance*100.0)/100.0 << endl;
        }
};

 int main(){
    Account acc(163);
    acc.setBalance(150.3659);

    acc.display();

    acc.credit(10.5);

    acc.display();

    acc.debit(500);
    acc.debit(50);

    acc.display();

    return 0;
 }
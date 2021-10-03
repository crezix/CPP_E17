#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

void printList(Node *n){
        while(n!=NULL){
            cout << n->data << " ";
            n = n->next;
        }
        cout << endl;
}

int main(){
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();


    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = NULL;

    printList(head);
}

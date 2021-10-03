#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};


void insertAtFront(Node *node,int data){
    Node *second = new Node();
    second->data = node->data;
    second->next = node->next;

    node->data = data;
    node->next = second;
}

void deleteElement(Node *node,int pos){
    Node *positioned = node->next;

    if(pos==0){
            node->data = node->next->data;
            node->next = node->next->next;
        }
    else{
        for (int i = 0; i < pos-1; i++){
            if(positioned->next!=NULL){
                positioned = positioned->next;
            }
            node = node->next;
        }

        node->next = positioned->next;
    }
}

void display(Node *node){
    while (node!=NULL){
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void count(Node *node){
    int count = 0;
    while (node!=NULL){
        count++;
        node = node->next;
    }
    cout <<"Length = "<<count<< endl;
}

int main(){
    Node *head = new Node();
    head->data = 5;
    head->next = NULL;


    insertAtFront(head,4);
    insertAtFront(head,3);
    insertAtFront(head,2);
    insertAtFront(head,1);

    deleteElement(head,3);

    display(head);
    count(head);

    return 0;
}
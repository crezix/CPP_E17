#include <iostream>
using namespace std;


class Node{ 
    public:
        int data;
        Node* link; 
};

Node* front = NULL; 
Node* rear = NULL;

bool isEmpty(){
    if (front==NULL && rear==NULL) 
        return true;
    else
        return false;
}

void enqueue(int value){
    Node* ptr = new Node(); 
    ptr->data = value; 
    ptr->link = NULL;

    if(front==NULL){ 
        front = ptr; 
        rear = ptr;
    }
    else{
        rear->link = ptr;
        rear = ptr;
    }

    cout << value << " enqueued!\n";
}

void dequeue(){
    if(isEmpty()){
        cout << "Queue is empty\n";
    }
    else{
        if(front==rear){
            cout << front->data << " dequeued!\n";
            free(front);
            front=rear=NULL;
        }
        else{
            Node* ptr = front; 
            front = front->link;
            cout << ptr->data << " dequeued!\n"; 
            free(ptr);
        }
    }
}

void showFront(){ 
    if(isEmpty())
        cout << "Queue is empty\n"; 
    else
        cout << front->data << "\n"; 
}

void displayQueue(){ 
    if(isEmpty())
        cout << "Queue is empty\n"; 
        else{
            Node* ptr = front; 
            while(ptr!=NULL){
                cout << ptr->data << " ";
                ptr = ptr->link; 
                }
            cout << "\n"; 
        }
}

int main() {
    enqueue(10); 
    enqueue(20); 
    enqueue(30); 
    enqueue(40); 
    enqueue(50); 
    displayQueue(); 
    dequeue(); 
    dequeue(); 
    dequeue(); 
    displayQueue(); 
}
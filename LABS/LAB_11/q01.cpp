#include<iostream>
using namespace std;

class StackNode{
    public:
        int data;
        StackNode *next;
};

StackNode* top;
StackNode* newNode(int data) {
    StackNode* stackNode = new StackNode(); 
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(StackNode* top) {
    return !top; 
}
void push(int data) {
    StackNode* stackNode = newNode(data); 
    stackNode->data = data; 
    stackNode->next = top;
    top = stackNode;
    cout << data << " pushed to stack\n"; 
}
int pop() {
    if (isEmpty(top)) return 0;
    StackNode* temp = top; 
    top = temp->next;
    int popped = temp->data; 
    free(temp);
    return popped; 
}

int peek() {
    if (isEmpty(top)) return 0;
    return top->data; 
}

void display(){
    while (top!=NULL){
        cout << top->data << " ";
        top = top->next;
    }
    cout << endl;
}

int main() {
    top = NULL;
    push(10); 
    push(20); 
    push(30); 
    push(40); 
    push(50);
    cout << pop() << " popped from stack\n"; 
    cout << pop() << " popped from stack\n"; 
    cout << pop() << " popped from stack\n"; 
    cout <<  isEmpty(top) << endl;
    display();
    return 0;
}
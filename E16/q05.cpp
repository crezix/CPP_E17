#include<iostream>
using namespace std;

//(i) Advantages:
//      1. Dynamic Size: Size of the list can be dynamically changed in linked lists. In arrays, we have to predefine the array size at initialization and have to stick to that size.
//         hence the array size can be changed later on the program. But in linked lists that can be changed.
//      2. Ease of insertion/deletion : In array to insert or delete an element, we have to shift elements forward or backward. But in linked list, an element can be added wherever needed
//         by adding a link from previous on and linking the element to next one. Also the deletion works same by bypassing an element
//    Disadvantages:
//      1. Cannot access elements randomly: In arrays the elements are located in contiguous memory locations. Therefore finding the index of a required element is easy. But in linked list, we have to
//         iterate till the element is found.
//      2. Higher memory space : In arrays only the data is stored. But in linked lists a pointer to the next element also stored in each element. Hence it will take a extra space than arrays.


class StackNode{
    public:
        int data;
        StackNode *next;
};

StackNode *top;

void push(int data){
    StackNode *newTop = new StackNode();
    newTop->data = data;
    newTop->next = top;
    top = newTop;
    
}

void display(){
    StackNode *ptr = top;
    if (top == NULL)
    {
        cout << "Stack is empty!";
    }
    while(ptr!=NULL){
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    free(ptr);
    cout
        << endl;
}

int main(){
    display();
    push(10);
    display();
    push(15);
    push(20);
    push(25);
    display();
    push(30);
    push(35);
    push(40);
    display();
}
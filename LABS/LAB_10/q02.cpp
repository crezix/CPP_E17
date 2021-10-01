#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        void insertAtFront(int data){
            Node *second = new Node();
            second->data = this->data;
            second->next = this->next;

            this->data = data;
            this->next = second;
        }

        void deleteElement(int pos){
            Node *before = this;
            Node *positioned = this->next;

            if(pos==0){
                    this->data = next->data;
                    this->next = next->next;
                }
            else{
                for (int i = 0; i < pos-1; i++){
                    before = positioned;
                    if(positioned->next!=NULL){
                        positioned = positioned->next;
                    }
                    
                }

                before->next = positioned->next;
            }
        }

        void display(){
            Node *node = this;
            while (node!=NULL){
                cout << node->data << " ";
                node = node->next;
            }
            cout << endl;
        }

        void count(){
            int count = 0;
            Node *node = this;
            while (node!=NULL){
                count++;
                node = node->next;
            }
            cout <<"Length = "<<count<< endl;
        }
};

int main(){
    Node *head = new Node();
    head->data = 5;
    head->next = NULL;

    head->insertAtFront(4);
    head->insertAtFront(3);
    head->insertAtFront(2);
    head->insertAtFront(1);

    //head->deleteElement(1);

    head->display();
    head->count();

    return 0;
}
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    // constructor
    node( int d){
        data = d;
        next = nullptr;
    }
};
void print(node* head){
    node* pp = head;
    while(pp!=nullptr){
        cout<<"Node : "<<pp->data<<endl;
        pp=pp->next;
    }
}
void reversal(node* &head){
    node* prev = nullptr;
    node* current = head;
    node* forward;
    while(current!=nullptr){
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    head = prev;
}
int main(){
    node* f0 = new node(10);
    node* f1 = new node(20);
    node* f2 = new node(30);
    node* f3 = new node(40);
    node* f4 = new node(50);

    f0->next = f1;
    f1->next = f2;
    f2->next = f3;
    f3->next = f4;
    f4->next = nullptr;

    cout<<"The linked list before reversal is : \n";
    print(f0);
    cout<<"The linked list after reversal is : \n";
    reversal(f0);
    print(f0);
    return 0;
}
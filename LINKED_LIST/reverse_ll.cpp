#include<iostream>
using namespace std;

class node{
    public : 
    node* next;
    int data;
    // constructor
    node(int d){
        data = d;
        next = nullptr;
    }
};
void print(node* head){
    while(head!=nullptr){
        cout<<"Node : "<<head->data<<endl;
        head = head->next;
    }
}
void reverse(node* &head){
    node* prev = nullptr;
    node* current = head;
    node* forward;
    while(current!=nullptr){
        forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }
    head= prev;
}
int main(){
    node* head = new node(10);
    node* first = new node(20);
    node* second = new node(30);
    node* third = new node(40);
    node* fourth = new node(50);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next =nullptr;
    int choice = 0;
    while(choice!=3){
        cout<<"1.Before Reversal\n2.After Reversal\n3.exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"The list before reversal is : ";
                print(head);
                break;
            }
            case 2:{
                reverse(head);
                cout<<"The list after the reversal is : ";
                
                print(head);
                break;
            }
            case 3:{
                cout<<"Exiting...\n";
                break;
            }
            default:{
                cout<<"Some error occured!\n";
                break;
            }
        }
    }
    
    cout<<endl;
    return 0;
}
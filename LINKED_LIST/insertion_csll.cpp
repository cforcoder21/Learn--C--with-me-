#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // comstructor
    node(int d){
        data = d;
    }
    // destructor
    ~node(){
        cout<<"Deleted node with value : "<<data<<endl;
    }
};

void print(node* head){
    node* tempo = head;
    while(tempo->next!=head){
        cout<<"Node : "<<tempo->data<<endl;
        tempo=tempo->next;
    }
}
void insathead(node* &head,int da){
    node* tempo = head;
    node* newnode = new node(da);

    if(head==nullptr){
        cout<<"Underflow\n";
    }
    else{
        while(tempo->next!=head){
            tempo = tempo->next;
        }
        newnode->next = head;
        tempo -> next = newnode;
        head = newnode;
        cout<<"Node inserted!\n";
    }
}
void insatmid(node* head,int da,int io){
    node* tempo = head;
    node* newnode = new node(da);
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        while(tempo->data !=io){
            tempo=tempo->next;
        }
        newnode->next = tempo->next;
        tempo->next = newnode;
        cout<<"Updated!\n";
    }
}

int main(){
    node* head = new node(10);
    node* first = new node(20);
    node* second = new node(30);
    node* third = new node(40);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = head;

    int choice =0;
    while(choice!=5){
        cout<<"1.Insert at head\n2.Insert at Mid\n3.Insert after node\n4.Display\n5.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:{
                int da;
                cout<<"Enter the node data to be inserted : ";
                cin>>da;
                insathead(head,da);
                break;
            }
            case 2:{
                int da;
                cout<<"Enter the node data to be inserted : ";
                cin>>da;
                cout<<"Enter the node data after which the new node needs to be inserted : ";
                int io;
                cin>>io;
                insatmid(head,da,io);
                break;
            }
            case 4:{
                cout<<"Linked List now is : \n";
                print(head);
                break;
            }
            case 5:{
                cout<<"Exiting...\n";
                break;
            }
            default:{
                cout<<"Some error occurred : \nExiting...\n";
                break;
            }
        }
    }
    return 0;
}
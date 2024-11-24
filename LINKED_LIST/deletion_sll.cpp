#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
};

node* print(node* head){
    while(head!=nullptr){
        cout<<head->data<<endl;
        head=head->next;
    }
}
node* delathead(node* head){
    node* tempo=head;
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        tempo=tempo->next;
        free(head);
        head=tempo;
        cout<<"Updated : \n";
        print(head);
    }
}

node* delatend(node* head){
    node* tempo=head;
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        while(tempo->next->next!=nullptr){
            tempo=tempo->next;
        }
        free(tempo->next);
        tempo->next=nullptr;
        cout<<"Updated : \n";
        print(head);
    }
}

node* delnod(node* head,int da){
    node* tempo = head;
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        while(tempo->next->data!=da){
            tempo=tempo->next;
        }
        tempo->next=tempo->next->next;
        free(tempo->next);
        print(head);        
    }
}
int main(){
    node* head = new node();
    node* first = new node();
    node* second = new node();
    node* third = new node();

    head->data = 100;
    head->next = first;

    first ->data = 101;
    first ->next = second;

    second->data = 102;
    second->next = third;

    third->data = 103;
    third->next = nullptr;

    int choice=0;
    while(choice!=5){
        cout<<"1.Delete at the head\n2.Delete at the tail\n3.Delete after the given node\n4.Display\n5.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Deleting at the head node : \n";
                delathead(head);
                break;
            }
            case 2:{
                cout<<"Deleting at the end : \n";
                delatend(head);
                break;
            }
            case 3:{
                cout<<"Deleting a node with it's data given : \n";
                int da;
                cout<<"Enter the node data to be deleted : ";
                cin>>da;
                delnod(head,da);
                break;
            }
        }
    }

    return 0;
}
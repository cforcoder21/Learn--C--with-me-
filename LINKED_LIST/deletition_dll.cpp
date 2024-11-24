#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;
    // constructor;
    node(int d){
        prev = nullptr;
        next = nullptr;
        data = d;
    }
};

void print(node* head){
    while(head!=nullptr){
        cout<<"Node : "<<head->data<<endl;
        head= head->next;
    }
}
void delathead(node* &head){
    node* tempo = head;
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        tempo->prev = nullptr;
        head=tempo->next;
        tempo->next = nullptr;
        free(tempo);
        cout<<"Updated : \n";
        print(head);
    }
}

void delatend(node* &head){
    node* tempo = head;
    if(tempo==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        while(tempo->next!=nullptr){
            tempo->prev->next == nullptr;
            free(tempo);
            cout<<"Updated : \n";
            print(head);
        }
    }
}

void delnod(node* &head,int da){
    node* tempo = head;
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        while(tempo->data!=da){
            tempo=tempo->next;
        }
        tempo->prev->next = tempo->next;
        tempo->prev=nullptr;
        tempo->next=nullptr;
        free(tempo);
        cout<<"Updated : \n";
        print(head);
    }
}

void delnod_ind(node* &head, int indx){
    node* tempo = head;
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        int i=1;
        while(i!=indx){
            tempo = tempo->next;
            i++;
        }
        tempo->prev->next=tempo->next;
        tempo->prev = nullptr;
        tempo->next = nullptr;
        free(tempo);
        cout<<"Updated : \n";
        print(head);
    }
}
int main(){

    node * ndn1 = new node(100);
    node * head= ndn1;

    node* ndn2 = new node(102);
    head->next = ndn2;
    ndn2->prev = head;

    node* ndn3= new node(103);
    ndn2->next= ndn3;
    ndn3->prev = ndn2;

    int choice =0;
    while(choice!=5){
        cout<<"1.Delete at head\n2.Delete at End\n3.Delete after node\n4.Delete at the index\n5.Display\n6.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Deleting at the head...\n";
                delathead(head);
                break;
            }
            case 2:{
                cout<<"Deleting at the end...\n";
                delatend(head);
                break;
            }
            case 3:{
                cout<<"Deleting the entered node data value : ";
                int da;
                cout<<"Enter the node data to be deleted : ";
                cin>>da;
                delnod(head,da);
                break;
            }
            case 4:{
                cout<<"Deleting the node at the index : \n";
                int da;
                cout<<"Enter the node index to be deleted : ";
                cin>>da;
                delnod_ind(head,da);
                break;
            }
            case 5:{
                cout<<"The linked list is : \n";
                print(head);
                break;
            }
            case 6:{
                cout<<"Exiting...\n";
                break;
            }
            default:{
                cout<<"Some error occured!\nExiting...\n";
                break;
            }

        }
    }
    return 0;
}
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
node* insertathead(node* head, int d){
    node* temp = new node();
    if(head==nullptr){
        cout<<"The linked list is empty!"<<endl;
    }
    else{
        temp->data= d;
        temp->next=head;
        head=temp;
        cout<<"Updated :\n";
        print(head);
    }
}
node* insertattail(node* head,int d){
    node *temp = new node();
    node* travel = head;
    if(head==nullptr){
        cout<<"The linked list is empty!"<<endl;
    }
    else{
        while(travel->next !=nullptr){
            travel=travel->next;
        }
        temp->data=d;
        temp->next=nullptr;
        travel->next=temp;
        cout<<"Updated :\n";
        print(head);
    }
}

node* insertatmid(node* head, int d,int ndo){
    node* temp= new node();
    node* travel =head;
    while(travel->data!= ndo){
        travel=travel->next;
    }
    temp->data= d;
    temp->next=travel->next;
    travel->next=temp;
    cout<<"Updated :\n";
    print(head);
}
int main(){
    node* newNode = new node();
    node* first = new node();
    node* second = new node();
    newNode->data=100;
    newNode->next=first;

    first->data=101;
    first->next=second;

    second->data=102;
    second->next=nullptr;

    int choice=0;
    while(choice!=5){
        cout<<"1.Insert at the head\n2.Insert at the tail\n3.Insert after the given node\n4.Display\n5.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Inserting at the head node : \n";
                int da;
                cout<<"Enter the new node data to be inserted at the head : ";
                cin>>da;
                insertathead(newNode,da);
                break;
            }    
            case 2:{
                cout<<"Inserting at the tail end : \n";
                int da;
                cout<<"Enter the new node data to be inserted at the tail : ";
                cin>>da;
                insertattail(newNode,da);
                break;
            }
            case 3:{
                cout<<"Inserting after the node : \n";
                int da,nod;
                cout<<"Enter the node data after which the new node needs to be inserted : ";
                cin>>nod;
                cout<<endl;
                cout<<"Enter the new node data to be inserted after the specified node : ";
                cin>>da;
                insertatmid(newNode,da,nod);
                break;
            }
            case 4:{
                cout<<"The linked list is : \n";
                print(newNode);
                break;
            }
            case 5:{
                cout<<"Exiting...\n";
                break;
            }
            default:{
                cout<<"Some error occoured now...\nExiting...\n";
                break;
            }
        }
    }
    return 0;
}
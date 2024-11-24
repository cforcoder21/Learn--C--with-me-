#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    // constructor
    node(int d){
        data = d;
        next = nullptr;
    }
    // destructor
    ~node(){
        cout<<"Deleting the node with data : "<<data<<endl;
    }
};

void print(node* head){
    node* newnode = head;
    while(newnode->next !=head){
        cout<<"Node : "<<newnode->data<<endl;
        newnode = newnode->next;
    }
}
void insathead(node* &head,int da){
    node* tail = head;
    node* newNode = new node(da);
    if(head == nullptr){
        head = newNode;
        newNode->next = newNode;
        cout<<"Node added!\n";
    }
    else{
        while(tail->next!=head){
            tail = tail->next;
        }
        newNode->next = head;
        tail->next = newNode;
        head = newNode;
        cout<<"Updated!\n";
    }
}

void insafternod(node* head,int da,int d){
    node* tail = head;
    node * newnode =  new node(da);
    if(head==nullptr){
        newnode->next = newnode;
        cout<<"updated!\n";
    }
    else{
        while(tail->data!=d){
            tail = tail->next;
        }
        newnode->next=tail->next;
        tail->next = newnode;
        cout<<"Updated!\n";
    }
}

void delattail(node* &head){
    node* prev = head;
    node* current = head->next;
    if(head == nullptr){
    if(head == nullptr){
    }
    if(head= nullptr){
        cout<<"Underflow!\n";
    }
    else{
        while(current->next !=head){
            prev = prev->next;
        prev->next = head;
        delete current;
        current->next = nullptr;
        delete prev->next;
        cout<<"Deleted!";
    }
}}}
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
    fourth->next = head;
    delattail(head);
    cout<<"Updated : ";
    print(head);


    return 0;
}
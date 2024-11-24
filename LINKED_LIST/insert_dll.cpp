#include<iostream>
using namespace std;

class newNode{
    public:
    newNode* prev;
    int data;
    newNode* next;
    // constructor;
    newNode(int d){
        prev = nullptr;
        next = nullptr;
        data = d;
    }
};

void print( newNode* head){
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    while(head!=nullptr){
        cout<<"Node : "<<head->data<<endl;
        head= head->next;
    }
}

void insathead(newNode* &head,int da){
    newNode* ndn = new newNode(da);
    ndn->next = head;
    head->prev = ndn;
    head= ndn;
    cout<<"Updated : \n";
    print(head);
}

void insatend(newNode* &head,int da){
    newNode* tempo = head;
    newNode* ndn2 = new newNode(da);
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        while(tempo->next!=nullptr){
            tempo = tempo->next;
        }
        tempo->next = ndn2;
        ndn2->prev = tempo;
        cout<<"Updated : \n";
        print(head);
    }
}

void insnod(newNode* &head,int da,int val){
    newNode* tempo = head;
    newNode* ndn3 = new newNode(val);
    if(head==nullptr){
        cout<<"Underflow!\n";
    }
    else{
        while(tempo->data!= da){
            tempo=tempo->next;
        }
        ndn3->next = tempo->next;
        tempo->next->prev = ndn3;
        tempo->next = ndn3;
        ndn3->prev = tempo;
        cout<<"Updated : \n";
        print(head);
    }

}
int main(){

    newNode* nd1 = new newNode(100);
    newNode* head = nd1;
    newNode* nd2= new newNode(102);
    head->next = nd2;
    nd2->prev = head;
    newNode* nd3 = new newNode(103);
    nd2->next = nd3;
    nd3->prev = nd2;

    int choice =0;
    while(choice!=5){
        cout<<"1.Insert at head\n2.Insert at End\n3.Insert after node\n4.Display\n5.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1:{
                int da;
                cout<<"Enter the node value (to be added at the head): ";
                cin>>da;
                insathead(head, da);
                break;
            }
            case 2:{
                int da;
                cout<<"Enter the node value (to be added at the end): ";
                cin>>da;
                insatend(head, da);
                break;
            }
            case 3:{
                int da,val;
                cout<<"Enter the node data value (to be added after the node): ";
                cin>>da;
                cout<<"Enter the new node data value : ";
                cin>>val;
                insnod(head, da,val);
                break;
            }
            case 4:{
                cout<<"Printing the linked list : \n";
                print(head);
                break;
            }
            case 5:{
                cout<<"Exiting...\n";
                break;
            }
            default:{
                cout<<"Some wrong input!\nExiting...\n";
                break;
            }
        }
    }
    
    return 0;
}
#include<iostream>
using namespace std;

class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    // Creating a constructor : 
    Node (int d){
        data = d;
        prev = nullptr;
        next = nullptr;
    }
};

void print( Node* &head){
    while(head!=nullptr){
        cout<<head->data<<endl;
        head=head->next;
    }
}
void insathead( Node* &head){
    Node* node2 = new Node(102);
    node2->next = head;
    head->prev = node2;
    head= node2;
    print(head);
}
int main(){
    Node* node1 = new Node(101);
    Node* head = node1;
    // print(head);
    insathead(head);
    return 0;
}
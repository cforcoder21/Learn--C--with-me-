#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node* top = 0;

void push(int x){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top; 
    top = newnode;
}

void display(){
    struct node* tempo = top;
    while(tempo!= NULL){
        printf("%d ",tempo->data);
        tempo = tempo->link;
    }
}

void peek(){
    if(top ==NULL){
        printf("Stack Underflow!\n");
    }
    else{
        printf("The topmost element is : %d\n",top->data);
    }
}

void pop(){
    if(top == NULL){
        printf("Stack Underflow!\n");
    }
    else{
        printf("Element daleted : %d\n",top->data);
        struct node* tempo = top;
        free(top);
        top = tempo->link;       
        
    }
}
int main(){
    int choice = 0;
    while(choice!= 5){
        printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                int d;
                printf("Enter the stack data to be inserted : ");
                scanf("%d",&d);
                push(d);
                break;
            }
            case 2:{
                pop();
                break;
            }
            case 3:{
                peek();
                break;
            }
            case 4:{
                display();
                break;
            }
            case 5:{
                printf("Exiting...\n");
                break;
            }
            default:{
                printf("Exiting...\n");
                break;
            }
        }
    }
    return 0;
}
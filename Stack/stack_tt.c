#include<stdlib.h>
#include<stdio.h>

struct stack{
    int data;
    struct stack* linking;
};
struct stack* top = 0;
void push(int d){
    struct stack* newNode = (struct stack*)malloc(sizeof(struct stack));
    newNode ->data = d;
    newNode->linking= top;
    top = newNode;
}

void pop(){
    if(top ==NULL){
        printf("Stack Underflow!\n");
    }
    else{
        struct stack* tempo = top;
        free(top);
        top = tempo->linking;
    }
}

void peek(){
    if(top == NULL){
        printf("Stack Underflow!\n");
    }
    else{
        printf("The topmost element is : %d",top->data);
    }
}

void display(){
    if(top == NULL){
        printf("Stack Underflow!\n");
    }
    else{
        while(top!=NULL){
            printf("%d ",top->data);
            top= top->linking;
        }
    }
}
int main(){
    int choice = 0;
    while(choice!=5){
        printf("\n1.Push()\n2.Pop()\n3.Peek()\n4.Display()\n5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:{
                int x;
                printf("Enter the new node data : ");
                scanf("%d",&x);
                push(x);
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
        }
    }
    return 0;
}
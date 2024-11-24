#include<stdio.h>
#include<stdlib.h>
#define N 10

int stack[N];
int top = -1;

void push(int data){
    if(top == N-1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Adding element : \n");
        top++;
        stack[top]= data;
        printf("Element %d added successfully!",data);
    }
}

void pop(){
    int item;
    if(top == -1){
        printf("Stack Underflow!");
    }
    else{
        item = stack[top];
        top--;
        printf("%d is deleted!", item);
    }
}

void peek(){
    if(top==-1){
        printf("Underflow!");
    }
    else{
        printf("The topmost element is : %d",stack[top]);
    }
}

void display(){
    printf("The stack is : ");
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
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
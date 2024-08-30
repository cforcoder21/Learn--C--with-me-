#include<iostream>
using namespace std;
void deleteArray_element(void){
    int size;
    cout<<"Enter the size of the array to be : ";
    cin>>size;
    cout<<endl;
    cout<<"Enter the elements of the array : ";
    int arro[size];
    for(int i=0;i<size;i++){
        cin>>arro[i];
    }
    cout<<endl;
    int pos;
    cout<<"Enter the position index to be deleted : ";
    cin>>pos;
    for(int i=pos;i<size;i++){
        arro[i]=arro[i+1];
    }
    size--;
    cout<<endl;
    cout<<"The array after deletion of the elements is : ";
    for(int i=0;i<size;i++){
        cout<<arro[i]<<" ";
    }

}

void insertArray_element(void){
    int size;
    cout<<"Enter the size of the array to be : ";
    cin>>size;
    cout<<endl;
    int arro[size];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arro[i];
    }
    cout<<endl;
    int pos,element;
    cout<<"Enter the element need to be placed/added : ";
    cin>>element;
    cout<<endl;
    cout<<"Enter the position where this element need to be placed/added : ";
    cin>>pos;
    for(int i=size-1;i>=pos;i--){
        arro[i+1]=arro[i];
    }
    arro[pos]=element;
    size++;
    cout<<endl;
    cout<<"The array after insertion of the elements is : ";
    for(int i=0;i<size;i++){
        cout<<arro[i]<<" ";
    }
    cout<<endl;
}
int main(){
    cout<<"Taking you to deletion of an array -->"<<endl;
    deleteArray_element();
    cout<<endl<<endl;
    
    cout<<"Taking you to insertion of an array -->"<<endl;
    insertArray_element();
    return 0;
}
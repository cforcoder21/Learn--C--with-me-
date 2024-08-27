// Creating a .cpp program that takes in input array from the user and then inserts a new element at the desired position.
#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array to be : ";
    cin>>size;
    int arro[size];
    cout<<"Enter the array elements : ";
    for(int i=0;i<size;i++){
        cin>>arro[i];
    }

    int pos,element;
    cout<<"\nEnter the new element to be added : ";
    cin>>element;
    cout<<"\nEnter the position where this element needs to be added : ";
    cin>>pos;
    for(int i=size-1;i>=pos;i--){
        arro[i+1]=arro[i];
    }
    arro[pos]=element;
    size++;
   cout<<"\nThe updated array is : ";

    for(int i=0;i<size;i++){
        cout<<arro[i]<<" ";
    }
    cout<<endl<<endl;
    return 0;
}
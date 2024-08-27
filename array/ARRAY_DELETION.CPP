/*Create a .cpp program that takes in input of the array according to it's size from the user;
  then delete one of it's element from/at the desired position entered by the user : */

#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arro[size];

    cout<<"\nEnter the array elements : ";
    for(int i=0;i<size;i++){
        cin>>arro[i];
    }

    int pos;
    cout<<"\nEnter position index to be deleted : ";
    cin>>pos;

    for(int i=pos;i<size;i++){
        arro[i]=arro[i+1];
    }
    size--;
    cout<<"\nThe updated array after deletion is : ";
    for(int i=0;i<size;i++){
        cout<<arro[i]<<" ";
    }
    cout<<endl<<endl;
    return 0;

}
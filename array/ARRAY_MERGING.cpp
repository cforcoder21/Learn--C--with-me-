#include <iostream>
using namespace std;

int main(){
    int size01,size02;
    cout<<"Enter the size of array 1 : ";
    cin>>size01;
    cout<<"\nEnter the size of array 2 : ";
    cin>>size02;
    cout<<"\nEnter the array 1 elements : ";
    int arro01[size01],arro02[size02];
    for(int i=0;i<size01;i++){
        cin>>arro01[i];
    }
    cout<<"\nEnter the array 2 elements : ";
    for(int i=0;i<size02;i++){
        cin>>arro02[i];
    }
    //merging;
    int size_merger=size01+size02;
    int merger_arro[size_merger];
    for(int i=0;i<size_merger;i++){
        merger_arro[i]=arro01[i];
    }
    for(int i=0;i<size_merger;i++){
        merger_arro[i+size01]=arro01[i];
    }
    for(int i=0;i<size_merger;i++){
        cout<<merger_arro[i]<<" ";
    }
    cout<<endl<<endl;
    return 0;
}
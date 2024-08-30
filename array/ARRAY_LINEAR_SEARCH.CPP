#include<iostream>
using namespace std;

void linear_Searching(int arro[], int size){
    int element_searching=0;
    cout<<"Enter the element to be searched : ";
    cin>>element_searching;
    cout<<endl;
    int found = 0;
    for(int i=0;i<size;i++){
        if(arro[i]==element_searching){
            found = 1;
        }
    }
    if(found==1){
        cout<<"YES, the element was found!"<<endl;
    }
    else{
        cout<<"NO, the element was not found!"<<endl;
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of the array to be : ";
    cin>>size;
    int arro[size];
    cout<<endl;
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arro[i];
    }
    cout<<endl;
    linear_Searching(arro,size);
    
    return 0;
}
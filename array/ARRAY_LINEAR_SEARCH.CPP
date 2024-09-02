#include <iostream>
using namespace std;
void linear_searching(int arro[],int size,int element){
    int found=0;
    int index=0;
    for(int i=0;i<size;i++){
        if(arro[i] == element){
            found=1;
            index= i;
        }
    }
    if(found == 1){
        cout<<"The element is found at index : "<<index<<endl;
    }
    else{
        cout<<"Regret, the element is not found! "<<endl;
    }
    cout<<endl;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arro[size];
    cout<<"\nEnter the array elements : ";
    for(int i=0;i<size;i++){
        cin>>arro[i];
    }
    int element;
    cout<<"\nEnter the element to be searched : ";
    cin>>element;
    linear_searching(arro,size,element);
    return 0;
}
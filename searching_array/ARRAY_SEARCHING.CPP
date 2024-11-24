#include <bits/stdc++.h>
using namespace std;


void linear_searching(int arro[], int element, int size){
    int found=0, index=0;
    for(int i=0;i<size;i++){
        if(arro[i] == element){
            found =1;
            index=i;
        }
    }
    if(found==1){
        cout<<"The element was found at index : "<<index<<endl;
    }
    else{
        cout<<"Regret, the element was not found!"<<endl;
    }
}
void binary_searching(int arro[], int element, int size){
    int low=0,mid,high=size-1;
    mid=(low+high)/2;
    while(low<=high){
        if(arro[mid] == element){
            cout<<"Element found at index : "<<mid<<endl;
            return ;
        }
        if(arro[mid] < element){
            low = mid+1;
        }
        if(arro[mid] > element){
            high = mid-1;
        }
        mid=(low+high)/2;
    }
    cout<<-1<<endl;
    cout<<"Regret, the element was not found!"<<mid<<endl;
}



int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arro[size];
    cout<<endl;
    
    int choice;
    cout<<"1.Linear searching \n2.Binary searching\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice){
        do{
            case 1:{
            cout<<"\nLinear Searching..."<<endl;
            cout<<endl;
            cout<<"Enter the array elements : ";
            for(int i=0;i<size;i++){
                cin>>arro[i];
            }
            cout<<"Enter the element to be searched : ";
            int element;
            cin>>element;
            linear_searching(arro,element,size);
            break;
        }
        case 2:{
            cout<<"\nBinary Searching..."<<endl;
            cout<<endl;
            cout<<"Enter the array elements(sorted) : ";
            for(int i=0;i<size;i++){
                cin>>arro[i];
            }
            cout<<"Enter the element to be searched : ";
            int element;
            cin>>element;
            binary_searching(arro,element,size);
            break;
        }
        case 3:{
            cout<<"Exiting..."<<endl;
        }
        default:{
            cout<<"Invalid Choice!"<<endl;
            break;
        }
        }
        while(choice != 3);
    }
    return 0;
}
#include <iostream>
using namespace std;

int linear_searching(int arro[], int element,int size){
    cout<<"Searching..."<<endl;
    int found=0;
    for(int i=0;i<size;i++){
        if(arro[i] == element){
            found= 1;
        }
    }

    if(found == 1){
        return 1;
    }
    else{
        return 0;
    }
}
int binary_searching(int arro[], int element, int size){
    int first,last;
    int mid= (first+last)/2;
    while(first<=last){
        if(arro[mid] == element){
        return mid;
        }
        if(arro[mid]<element){
            first=mid+1;
            mid=(first+last)/2;
        }
        else{
            last=mid-1;
        }
    }
    return 0;
}
int main(){
    cout<<"Linear Searching...."<<endl;
    cout<<endl<<endl<<endl<<endl;

    int size;
    cout<<"Enter the size of the array to be : ";
    cin>>size;
    cout<<endl;
    int arro[size];
    cout<<"Enter the elements residing in the array : ";
    for(int i=0;i<size;i++){
        cin>>arro[i];
    }
    int element;
    cout<<"Enter the element to be searched : ";
    cin>>element;
    int lin_sear= linear_searching(arro,element,size);
    int bin_sear= binary_searching(arro,element,size);
    return 0;    
}
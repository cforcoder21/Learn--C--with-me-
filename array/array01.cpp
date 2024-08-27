// Creating a .cpp program that determines the maximum and the minimum of the array;

#include <iostream>
using namespace std;

void max_or_min(int arro[],int n){
    int max= INT8_MAX;
    int min= INT8_MIN;
    for(int i=0;i<n;i++){
        if(arro[i]>max){
            max=arro[i];
        }
        else if(arro[i]<min){
            min=arro[i];
        }
    }
    cout<<"The maximum of the array is : "<<max<<endl;
    cout<<"The minimum of the array is : "<<min<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arro[n];
    cout<<"\nEnter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>arro[i];
    }
    max_or_min(arro,n);
    
    return 0;
}
#include <iostream>
using namespace std;

int maxArray(int num[], int size){
    int max=num[0],i=0;
    for(i=0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int minArray(int num[],int size){
    int min=num[0],i=0;
    for(i=0;i<size;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int num[n],i=0;
    cout<<"Enter a number array : ";
    for(i=0;i<n;i++){
        cin>>num[i];
    }    
    int result;
    cout<<"The minimum of the array is : "<<minArray(*num,n)<<endl;
    cout<<"The maximum of the array is : "<<maxArray(*num,n)<<endl;
    return 0;
}
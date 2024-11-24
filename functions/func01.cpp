//The simplest function;

#include <iostream>
using namespace std;
int sum();
int main(){
    sum();
}
int sum(){
    int a,b,sum=0;
    cout<<"Enter both the number with spaces : ";
    cin>>a>>b;
    sum=a+b;
    cout<<"\nThe sum is : "<<sum<<endl;
    return 0;
}

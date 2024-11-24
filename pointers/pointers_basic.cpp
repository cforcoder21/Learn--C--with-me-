#include <iostream>
using namespace std;

int main(){
    int a=90;
    int *b;
    b=&a;
    cout<<"Value of a is : "<<a<<endl;
    cout<<"Address of a stored in b is : "<<*b<<endl;
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The value of b is : "<<*(&b)<<endl;
    return 0;
}
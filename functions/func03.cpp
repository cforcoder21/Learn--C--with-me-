#include <iostream>
#include <string>

using namespace std;

char fun(){
    char c;
    cout<<"Enter any charecter : ";
    cin>>c;
    return 'c';
}
int main(){
    char ch;
    ch=fun();
    cout<<"This is what you entered : "<<ch<<endl;
    return 0;
}
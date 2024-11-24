#include <iostream>
using namespace std;

 void printArray(int *array_name, int size){
    cout<<"The array is : ";
    int i=0;
    for(i=0;i<size;i++){
        cout<<array_name[i]<<" "<<endl;
    }
}
int main(){
    int first[10]={1,2};
    cout<<"The second element is : "<<first[1]<<endl;

    int second[4]={1,2,3,4};
    printArray(second,sizeof(second)/sizeof(int));
    return 0;
}
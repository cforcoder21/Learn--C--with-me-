#include <iostream>
using namespace std;

int main(){
    int m1,n1,m2,n2;
    cin>>m1>>n1>>m2>>n2;
    cout<<endl;
    int arro[m1][n1];
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>arro[i][j];
        }
    }
    cout<<endl;
    int arro02[m2][n2];
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>arro[i][j];
        }
    }
    cout<<endl;
    int arro03[m2][n1];
    if(n1 == m2){
        for(int i=0;i<m2;i++){
            for(int j=0;j<n2;j++){
                cin>>arro[i][j];
            }
        }
        cout<<endl;
        //multiplication;
        for(int i=0;i<m2;i++){
            for(int j=0;j<n1;j++){
                for(int k=0;k<m1;k++){
                    arro03[i][j]+=arro[i][k] * arro02[j][k];
                }
            }
        }
    }
    cout<<endl;
    for(int i=0;i<m2;i++){
        for(int j=0;j<n1;j++){
            cout<<arro03[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}

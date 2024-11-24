#include <bits/stdc++.h>
using namespace std;

int main() {
	int arro[10]={54,5,3,10,12,18};
	int pos=5,element=7;
	for(int i=10;i>=pos;i--){
	    arro[i+1]=arro[i];
	}
	arro[pos]=element;
	for(int i=0;i<=10;i++){
	    cout<<arro[i]<<" ";
	}
	return 0;

}

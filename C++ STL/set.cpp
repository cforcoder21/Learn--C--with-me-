#include<bits/stdc++.h>
using namespace std;

void sett(){
    // A set stores every element in the sorted ascending orderand all the values are unique;
    // i.e none of them are redundant;
    set<int> st;
    st.emplace(90);
    st.insert(8);
    st.insert(87);
    st.emplace(12);
    
    auto num = st.find(9);
    cout << *num << endl;
}
int main(){
    sett();
    return 0;
}
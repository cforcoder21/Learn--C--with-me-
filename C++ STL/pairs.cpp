// C++ STL: STANDARD TEMPLATE LIBRARY
#include<bits/stdc++.h>

using namespace std;

void pairs(){
    cout<<" 1.pairs"<<endl;
    pair<int ,int> n= {21,1};
    cout<<n.first <<" "<<n.second<<endl;

    pair<int,pair<int,int>> p={21,{2,3}};
    cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;

    pair<int,int> arro[]={{1,2},{3,4},{5,6}};
    cout<<arro[2].first<<endl;
    cout<<arro[0].second<<endl;
}
void vectors(){
    cout<<" 2.Vectors"<<endl;
    vector<int> vec;
    vec.push_back(1);
    vec.emplace_back(21);
    // bOTH THE FUNCTIONS FOR BACKING WORKS SAME AND DOES THE SAME WORK BUT THE BASIC DIFFERENCE IS THAT THE EMPLACE
    // FUNCTION IS MUCH MORE FASTER THAN THE NORMAL BACK FUNCTION;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }cout<<endl;


    vector<pair<int,int>> v;
    v.push_back({1,2});
    v.emplace_back(21,23);
    for(int i=0;i<v.size()-1;i++){
        cout<<v[1].first<<" "<<v[1].second<<" "<<v[0].first<<" "<<v[0].second<<" ";
    }
    
    // auto iterator =itr;
    // itr  v.begin();
    // cout<<itr<<endl;
    cout<<endl;


    vector<int> ve(6,100);// Initializing 6 elements(/instances) of the vector array to 100;
    for(int i=0;i<ve.size();i++){
        cout<<ve[i]<<" ";
    }cout<<endl;


    vector<int> vt(ve);// Initializing vector array "vt" to to instances of ve;
    cout<<endl;
}

int main(){
    // pairs();
    // vectors();
    // stackk();
    queUUe();
    return 0;
}
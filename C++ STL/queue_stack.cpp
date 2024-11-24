#include<bits/stdc++.h>
using namespace std;

void stackk(){
    // stack follows LIFO : LAST IN FIRST OUT;
    cout<<"Stack"<<endl;
    stack<int> stck;
    stck.push(12);
    stck.push(1);
    stck.push(2);
    stck.push(20);
    stck.push(10);
    stck.emplace(90);

    cout<<stck.top()<<" "<<endl;
    stck.pop();
    
    cout<<stck.top()<<" "<<endl;
    cout<<stck.size()<<endl;
    cout<<stck.empty()<<endl;
}
void queUUe(){
    // queqe follows FIFO: FIRST IN FIRST OUT;
    cout<<"Queue"<<endl;
    queue<int> que;
    que.push(12);
    que.push(1);
    que.push(2);
    que.push(102);
    que.push(20);
    que.push(7);
    que.emplace(90);
    cout<<que.back()<<" "<<endl;
    cout<<que.front()<<" "<<endl;
}

void queue_p(){
    // Priority queue is a queue that takes element in any order and always stores the elements in a sorted 
    // sorted form i.e from descending order.
    cout<<"Priority Queue"<<endl;
    priority_queue<int> pque;
    pque.push(100);
    pque.push(1);
    pque.push(10);
    pque.push(20);
    pque.push(1000);
    pque.push(23);
    pque.push(12);
    cout<< pque.top()<<endl;
    pque.pop();
    cout<< pque.top()<<endl;
    cout<<pque.size()<<endl;
    cout<<pque.empty()<<endl;
}

void min_queue(){
    cout<<"Min priority queue : "<<endl;
    // The minimum priority queue does the same but stores the element sorted in the ascending order.
    priority_queue<int,vector<int>, greater<int>> pq;
    pq.push(45);
    pq.emplace(90);
    pq.emplace(7);
    pq.push(8);
    cout<<pq.top()<<endl;
}
int main(){
    stackk();
    queUUe();
    queue_p();
    min_queue();
    return 0;
}
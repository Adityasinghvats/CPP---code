#include<iostream>
#include<queue>
using namespace std;
//cpp will make a max heap by default
int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(-10);
    pq.push(98);
    pq.push(5);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(5);

    // cout<<pq.size()<<endl;

    // cout<<pq.top()<<endl;

    pq.pop();

    // cout<<pq.top()<<endl;

    // Minimum heap
    priority_queue<int,vector<int>,greater<int>> pq1;
    pq1.push(5);
    pq1.push(7);
    pq1.push(2);
    pq1.push(3);
    cout<<pq1.top()<<endl;
}
#include<bits/stdc++.h>
// redorder queue using stack
// 12345678
// 15263748
using namespace std;
int main(){
    queue<int> q;
    for(int i=1;i<=10;i++){
        q.push(i);
    }
    stack<int> st;
    int n = q.size();
    //step 1 - first half in st
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //step 2 - st element in q
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //second half in stack
    for(int i=1;i<=n/2;i++){
        st.push(q.front());
        q.pop();
    }
    //step 3 interleaf
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    //arrange in correct order 
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //display
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
}
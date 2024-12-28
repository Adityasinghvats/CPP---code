#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    stack<int> st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int k = 2;
    //fill k elements into stack
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    //pop stack to fill element in queue in reverse order
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    //rotate rest of the elements
    for(int i=0;i<q.size()-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
}
#include<iostream>
#include<queue>
#include<stack>
/*
While printing we dont need to make any extra queue like in case of a stack
we simply pop from front and push at the end and the order remains same;
*/
using namespace std;
void display(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int> &q){
    stack<int> st;
    while (q.size()>0)
    {
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // int iter = q.size();
    // while (iter--)
    // {
    //     int x = q.front();
    //     cout<<x<<" ";
    //     q.pop();
    //     q.push(x);
    // }
    // cout<<endl;

    display(q);
    reverse(q);
    display(q);

    // iter = q.size();
    // while (iter--)
    // {
    //     int x = q.front();
    //     cout<<x<<" ";
    //     q.pop();
    //     q.push(x);
    // }
    
}
#include<iostream>
#include<stack>
using namespace std;
void push_at_idx(stack<int>& st,int idx,int ele){
    stack<int> temp;
    while(st.size()>idx+1){
        temp.push(st.top());
        st.pop();
    }
    st.push(ele);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    push_at_idx(st,2,23);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}
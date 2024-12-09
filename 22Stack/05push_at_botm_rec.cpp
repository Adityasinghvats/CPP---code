#include<iostream>
#include<stack>
using namespace std;
void push_at_bottom(stack<int>& st,int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    push_at_bottom(st,val);
    st.push(x);
}
void displayRecur(stack<int>& st){
    if(st.size()==0) return;
    cout<<st.top()<<endl;
    int x = st.top();
    st.pop();
    displayRecur(st);
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    push_at_bottom(st,32);
    displayRecur(st);
}
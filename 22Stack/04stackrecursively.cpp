#include<iostream>
#include<stack>
using namespace std;
//elements are printed and then pushed back to maintain same order
//it has extra time complexity due to recursion call stack
void displayRecur(stack<int>& st){
    if(st.size()==0) return;
    cout<<st.top()<<endl;
    int x = st.top();
    st.pop();
    displayRecur(st);
    st.push(x);
}
void displayRev(stack<int>& st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    displayRev(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    displayRev(st);
}
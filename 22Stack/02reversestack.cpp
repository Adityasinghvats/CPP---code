//reverse a stack using 2 extra stacks
#include<iostream>
#include<stack>
//S.C = 0(3n)
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    stack<int> rev;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        rev.push(temp.top());
        temp.pop();
    }
    while(rev.size()>0){
        st.push(rev.top());
        rev.pop();
    }
    cout<<"Stack in reverse order:"<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
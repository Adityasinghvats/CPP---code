#include<iostream>
#include<stack>
using namespace std;
//stack forces to code using discipline and also useful in DS
int main(){
    stack<int> st;
    // cout<<st.empty()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.top()<<endl;
    // cout<<st.empty()<<endl;
    // cout<<st.size()<<endl;

    //print stack
    // while(st.size()>0){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }

    //how to get elemnents back in stack by coping
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    //copying back to original stack
    while(temp.size()>0){
        int x = temp.top();
        cout<<temp.top()<<" ";
        temp.pop();
        st.push(x);
    }
    cout<<endl<<st.size()<<endl;
    return 0;
}
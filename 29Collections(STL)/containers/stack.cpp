#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;

    cout<<st.empty();
}
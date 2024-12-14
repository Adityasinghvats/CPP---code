#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s = "(())()(";
    stack<char> st;
    for(int i=0;i<s.size();i++){
        // if((int)s[i]==40) st.push(s[i]);
        if(s[i]=='(') st.push(s[i]);
        else if(!st.empty()) st.pop();
    }
    if(st.empty()) cout<<"String is balanced";
    else cout<<"String is not balanced";
}
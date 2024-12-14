#include<bits/stdc++.h>
using namespace std;
//remove consecutive duplicate from string;
int main(){
    string s = "aaabbcddaabffg";
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=st.top()) st.push(s[i]);
    }
    string ans = "";
    while(st.size()!=0){
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}
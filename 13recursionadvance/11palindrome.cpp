#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s,int strt,int end){
    if(s[strt] != s[end]) return false;
    palindrome(s,strt+1,end-1);
    return true;
}
int main(){
    string s = "abcdcba";
    int ans = palindrome(s,0,s.length()-1);
    cout<<bool(ans);
}
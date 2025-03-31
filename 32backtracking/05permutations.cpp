#include<bits/stdc++.h>
using namespace std;
//brute force solution first
// void f(string ipt, string ans){
//     if(ipt.size() == 0) {
//         cout<<ans<<"\n";
//         return;
//     }
//     for(int i=0;i<ipt.size();i++){
//         char ch = ipt[i];
//         //left substring + right substring
//         string rem = ipt.substr(0,i) + ipt.substr(i+1);
//         f(rem, ans + ch);
//     }
// }

//optimised
void f(string &ipt, int idx){
    if(idx == ipt.size() - 1) {
        cout<<ipt<<"\n";
        return;
    }
    unordered_set<char> s;
    for(int i=idx;i<ipt.size();i++){
        //pruning 
        if(s.count(ipt[i])) continue;
        s.insert(ipt[i]);
        swap(ipt[i], ipt[idx]);
        f(ipt, idx+1);
        //revert back
        swap(ipt[i], ipt[idx]);
    }
}
int main(){
    string ipt = "aba"; //try "abc" and "aba"
    // f(ipt, "");
    f(ipt, 0);
    return 0;
}
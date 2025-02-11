#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string removeOccurrences(string s, string part) {
            //sliding window of size same as part
            int n = part.size();
            string win = "";
            int idx = 0;
            while(idx<s.size()){
                if(win.size()<=n){
                    win.append(s.substr(idx,n));
                }
                cout<<win<<endl;
                if(win==part){
                    win = "";
                    s.erase(idx,n);
                    cout<<s<<endl;
                    idx=0;
                }
                else{
                    win = "";
                    idx++;
                }
            }
            return s;
        }
    };
int main(){
    string s = "ccctltctlltlb";
    string part = "ctl";
    Solution *sol1 = new Solution();
    string ans = sol1->removeOccurrences(s,part);
    cout<<ans;
}
/*
LC1910. Remove All Occurrences of a Substring
*/
#include<bits/stdc++.h>
using namespace std;

// vector<string> partitionString(string s) {
//     vector<string> ans;
//     unordered_set<string> seen;
    
//     int i = 0;
//     while(i < s.length()) {
//         string current = "";
        
//         // Build segment character by character until it's unique
//         do {
//             current += s[i];
//             i++;
//         } while(i < s.length() && seen.count(current) > 0);
        
//         // Only add if we found a unique segment OR if we've consumed all characters
//         // but the segment is still unique
//         if(seen.count(current) == 0) {
//             ans.push_back(current);
//             seen.insert(current);
//         }
//     }
    
//     return ans;
// }
    vector<string> partitionString(string s) {
        unordered_set<string> seen;
        vector<string> ans;
        string t;
        for (char c : s) {
            t.push_back(c);
            if (!seen.count(t)) {
                ans.push_back(t);
                seen.insert(t);
                t.clear();
            }
        }
        return ans;
    }


vector<string> partition(string s){
    int n = s.length();
    unordered_set<string> seen;
    vector<string> ans;
    string curr = "";
    for(char c:s){
        curr.push_back(c);
        if(!seen.count(curr)){
            ans.push_back(curr);
            seen.insert(curr);
            curr.clear();
        }
    }
    return ans;
}


int main(){
    vector<string> ans = partition("aaabbbccccdd");
    
    // Print the result
    cout << "Result: [";

    for(int i = 0; i < ans.size(); i++) {
        cout << "\"" << ans[i] << "\"";
        if(i < ans.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    
    return 0;
}
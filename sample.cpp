#include<bits/stdc++.h>
using namespace std;
string result(string s){
    if(s.size()==0) return "";
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(abs(s[j]-s[i])==1 || abs(s[j]-s[i])==25){
                cout<<abs(s[j]-s[i])<<endl;
                s.erase(i,1);
                s.erase(j-1,1);//to account for 1 removed char
            }
        }
    }
    return s;
}
int main(){
    cout<<result("adcb");
    // string s = "abc";
    // cout<<s.erase(1,1);
    return 0;
}
/*
Q2. Resulting String After Adjacent Removals
Medium
4 pt.
You are given a string s consisting of lowercase English letters.

You must repeatedly perform the following operation while the string s has at least two consecutive characters:

Remove the leftmost pair of adjacent characters in the string that are consecutive in the alphabet, in either order (e.g., 'a' and 'b', or 'b' and 'a').
Shift the remaining characters to the left to fill the gap.
Return the resulting string after no more operations can be performed.

Note: Consider the alphabet as circular, thus 'a' and 'z' are consecutive.

 

Example 1:

Input: s = "abc"

Output: "c"

Explanation:

Remove "ab" from the string, leaving "c" as the remaining string.
No further operations are possible. Thus, the resulting string after all possible removals is "c".
Example 2:

Input: s = "adcb"

Output: ""

Explanation:

Remove "dc" from the string, leaving "ab" as the remaining string.
Remove "ab" from the string, leaving "" as the remaining string.
No further operations are possible. Thus, the resulting string after all possible removals is "".
Example 3:

Input: s = "zadb"

Output: "db"

Explanation:

Remove "za" from the string, leaving "db" as the remaining string.
No further operations are possible. Thus, the resulting string after all possible removals is "db".
*/
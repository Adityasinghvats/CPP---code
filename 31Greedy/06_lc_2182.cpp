#include<bits/stdc++.h>
using namespace std;
/*
https://leetcode.com/problems/construct-string-with-repeat-limit/description/
TC - O(nlogn)
SC - O(1) as we are using 26 alphabets only
*/
string repeatLimitedString(string s, int repeatLimit) {
            unordered_map<char, int> mp;
            for(int i=0;i<s.size();i++){
                mp[s[i]]++;
            }
            priority_queue<pair<char, int>> pq;
            for(auto p:mp){
                pq.push(p);
            }
    
            string result = "";
            while(!pq.empty()){
                auto largest = pq.top();
                pq.pop();
                //if limit is less take that , if limit is greater take no of largest char
                int len = min(repeatLimit, largest.second);
                for(int i=0;i<len;i++){
                    result += largest.first;
                }
                pair<char, int> secondLargest;
    
                //some part of largest is still left
                if(largest.second - len > 0){
                    if(!pq.empty()){
                        secondLargest = pq.top();
                        pq.pop();
                        result += secondLargest.first;
                    }else{
                        //in case we don't have a second element and the limit has already been reached
                        return result;
                    }
                    if(secondLargest.second -1 > 0){
                        pq.push({secondLargest.first, secondLargest.second - 1});
                    }
                    pq.push({largest.first, largest.second - len});
                }
                //push remaining
            }
            return result;
        }
int main(){
    string s = "bbbbaabbbccca";
    int repeatLimit = 3;
    cout<<repeatLimitedString(s, repeatLimit);
    return 0;
}
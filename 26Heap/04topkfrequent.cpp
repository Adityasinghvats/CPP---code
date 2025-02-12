#include<bits/stdc++.h>
using namespace std;
//O(nlogn)
class Solution {
    public:
        vector<int> topKFrequent(vector<int>& arr, int k) {
            unordered_map<int,int> mp;
            for(int i=0;i<arr.size();i++){
                mp[arr[i]]++;
            }
            priority_queue<pair<int,int>> pq;
            for(const auto& ele:mp){
                pq.push({ele.second, ele.first});
            }
            vector<int> finalans;
            for(int i=1;i<=k;i++){
                pair<int,int> ans = pq.top();
                pq.pop();
                finalans.push_back(ans.second);
            }
            for(int ele:finalans){
                cout<<ele<<" ";
            }
            return finalans;
    }
};

int main(){
    vector<int> v = {1,1,1,1,2,2,2,3};
    int k = 2;
    Solution* s1 = new Solution();
    s1->topKFrequent(v,2);
}
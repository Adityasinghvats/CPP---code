#include<bits/stdc++.h>
using namespace std;
//give a array of length of ropes find min cost to connect them if , length of rope == cost
class Solution{
    public:
    int minCost(vector<int>& arr){
        priority_queue<int,vector<int>, greater<int>> pq;
        for(int ele:arr){
            pq.push(ele);
        }
        while(pq.size()>1){
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            pq.push(x+y);
            cout<<"Cost : "<<x+y<<endl;
        }
        return pq.top();
    }
};
int main(){
    vector<int> arr {2,7,4,1,8};
    Solution* s = new Solution();
    cout<<s->minCost(arr);
}
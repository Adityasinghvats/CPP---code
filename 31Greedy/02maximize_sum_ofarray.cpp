#include<bits/stdc++.h>
using namespace std;
int largestSumAfterKNegations(vector<int>& nums, int k) {//O(k log n)
    priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
    int sum = 0;
    for(int ele:nums) sum += ele;
    //negate the smallest elements first
    //multiple operations on a single ele is allowed
    while(k--){
        int el = pq.top();
        if(el == 0){
            break;
        }
        pq.pop();
        sum -= el;
        pq.push(-1*el);
        sum += (-el);
    }
    
    return sum;
}
int main(){
    vector<int> v = {-1, 4, 3, 0};
    cout<<largestSumAfterKNegations(v, 2);
    return 0;
}
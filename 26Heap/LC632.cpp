#include<bits/stdc++.h>
/*
for k lists each of size n
TC = O(nk log k)
*/
using namespace std;
typedef pair<int, pair<int,int>> pp;
    //{element ,{row, col}}
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pp, vector<pp> , greater<pp>> pq;
        int k = nums.size();//to make sure heap doesnot have more than 1 ele from each subarray
        int mx = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            mx = max(mx, nums[i][0]);
            pq.push({nums[i][0], {i, 0}});
        }
        int min = pq.top().first;
        int start = min; 
        int end = mx;
        while(true){
            int top_ele_row = pq.top().second.first;
            int top_ele_col = pq.top().second.second;
            pq.pop();
            if(top_ele_col == nums[top_ele_row].size()-1) break; //reaches end of a row
            int newele = nums[top_ele_row][top_ele_col+1];
            pq.push({newele, {top_ele_row,top_ele_col+1}});
            mx = max(mx, newele);
            min = pq.top().first;
            //comapre with previous range ans see if it is new range is less , replace start and end
            if(mx-min < end-start){
                end = mx;
                start = min;
            }
        }
        return {start, end};
    }
int main(){
    vector<vector<int>> v = {{4,10,15,24,26},{0,9,12,20},{5,18,22,30}};
    vector<int> ans = smallestRange(v);
    for(int ele:ans){
        cout<<ele<<" ";
    }
    return 0;
}
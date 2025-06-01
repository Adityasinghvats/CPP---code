#include<bits/stdc++.h>
/*
Give an array of interval of meetings , return the minimum number of meeting rooms required
interval[i] = {strt, end}
[[0,30],[5,10],[15,20]]
ans: 2
- overlapping meeting may eexist, then they need more rooms
- make 2 sorted arrays of 1 for start one for end 
- if a meeting has started add 1 room until it is finished
TC - O(n logn)
*/


using namespace std;
int minMeetingRoom(vector<vector<int>>& interval){
    int ans = 0, room = 0;
    vector<int> strt, end;
    for(auto ele:interval){
        strt.push_back(ele[0]);
        end.push_back(ele[1]);
    }
    
    sort(strt.begin(), strt.end());
    sort(end.begin(), end.end());
    int i=0, j=0;
    while(i<strt.size() and j < end.size()){
        if(strt[i] < end[j]){//meeting is starting
            room++;
            ans = max(ans, room);
            i++;
        }else if(end[j] < strt[i]){
            room--;
            j++;
        }else if(strt[i] == end[j]){
            i++; j++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> interval = {{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
    cout<<"Min no of rooms required: "<<minMeetingRoom(interval);
    return 0;
}
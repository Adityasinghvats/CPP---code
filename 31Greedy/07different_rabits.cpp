#include<bits/stdc++.h>
using namespace std;
/*
//think optimistically
    //O(n), O(n)
There is a forest with an unknown number of rabbits. 
We asked n rabbits "How many rabbits have the same color as you?" and collected the answers in an 
integer array answers where answers[i] is the answer of the ith rabbit.

Given the array answers, return the minimum number of rabbits that could be in the forest.
*/
int findMinNoOfRabbits(vector<int> &arr){
    unordered_map<int,int> mp;
    int res = 0;
    for(int i=0;i<arr.size();i++){
        if(!mp[arr[i]+1]){
            res += arr[i]+1;
            if(arr[i]==0) continue;
            mp[arr[i]+1] = 1;
        }else{
            //increment value for similar keys who, rabbits who said they found same no of
            //rabbits as some other rabbit
            mp[arr[i]+1]++;
            int key = arr[i]+1, val = mp[arr[i]+1];
            if(key==val){
                mp.erase(key);
            }
        }
    }
    return res;
}
int main(){
    vector<int> v = {5,5,5,5,5,5,5,5,5};
    cout<<"Min no of rabbits in forest is: "<<findMinNoOfRabbits(v);
    return 0;
}
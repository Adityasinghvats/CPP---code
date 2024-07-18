#include<bits/stdc++.h>
using namespace std;
int main(){
    // Map has key value pair -> O(log N)
    // Each key is unique and sorted
    map<int,int> mp1;
    map<int,pair<int,int>> mp2;
    map<pair<int,int>,int> mp3;

    mp1[0] = 10;
    // cout<<mp1[0];

    mp2.emplace({1,2});
    mp2.insert({3,4});
    mp2.insert({5,6});
    cout<<mp2[0];

    auto it = mp1.find(10);
    // give address of 10

    multimap<int,int> mp; 
    // -> O(1)
}
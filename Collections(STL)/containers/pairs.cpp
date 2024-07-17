#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p = {1,2};
    // cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> ps = {1,"Aditya"};
    cout<<ps.second<<endl;

    pair<int,pair<int,int>> p1 = {1,{2,3}};
    // cout<<p1.first<<endl;
    // cout<<p1.second.second<<endl;

    pair<int,vector<int>> p3 = {1,{1,2,3,4}};
    // cout<<p3.second[3];

    // Pair array
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<endl;
    cout<<arr[1].second<<endl;

}
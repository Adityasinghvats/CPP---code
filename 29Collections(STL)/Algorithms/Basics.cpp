#include<bits/stdc++.h>
using namespace std;
int main(){
    // Custom sorting comparator
    struct Compare
    {
        bool operator()(const pair<int,int> &p1,const pair<int,int> &p2){
            return p1.first>p2.first;
        }
    };

    // In descending order
    vector<int> v;
    sort(v.begin(),v.end(), Compare());
}
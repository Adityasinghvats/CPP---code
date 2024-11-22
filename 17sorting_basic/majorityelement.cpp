#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    
    int n = v.size();
    sort(v.begin(),v.end());
    int mid = n/2;
    cout<<"Majority element is: "<<v[mid]<<endl;
}
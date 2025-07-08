#include<bits/stdc++.h>
#define ll long long int
// Find the min cost to cut a piece of M x N wood
using namespace std;
bool cmp(int x, int y){
    return x>y;
}
ll minCostToGrid(int m, int n, vector<ll>& x, vector<ll> &y){
    sort(x.begin(), x.end(), cmp);
    sort(y.begin(), y.end(), cmp);
    // no of cuts horizontal, vertical
    int hz  = 1, vr = 1;
    // pointers for array horizontal and vertical
    int h = 0, v = 0;
    int ans = 0;
    while(h < y.size() and v < x.size()){
        if(x[v] > y[h]){
            ans += x[v] * vr;
            hz++;
            v++;
        }else{
            ans += y[h] * hz;
            vr++; //increment cuts 
            h++; //increment pointer
        }
    }
    while(h < y.size()){
        ans += y[h] * hz;
        vr++;
        h++;
    }
    while(v < x.size()){
        ans += x[v] * vr;
        hz++;
        v++;
    }
    return ans;
}

int main(){
    int n, m;
    cin>>m>>n;
    vector<ll> horizontal, vertical;
    for(int i=0;i<m-1;i++){
        int m;
        cin>>m;
        vertical.push_back(m);
    }
    for(int i=0;i<n-1;i++){
        int n;
        cin>>n;
        horizontal.push_back(n);
    }
    cout<<minCostToGrid(m, n, horizontal, vertical);
    return 0;
}
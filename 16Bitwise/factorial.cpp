#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long int> v(26,1);
    int MOD = 1000000000 + 7;
    //all numbers are smaller than MOD so in case we get a number larger it will make it smaller and within
    // the specified range for our usage
    for(int i=2;i<=25;i++){
        v[i] = ((i%MOD )* (v[i-1]%MOD)) % MOD;
    }  
    for(int i=0;i<=25;i++){
        cout<<v.at(i)<<" ";
    } 
}
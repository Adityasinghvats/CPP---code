#include<bits/stdc++.h>
using namespace std;
// 0b-opening bracket
void valid(int ob,int cb,string ans,int n){
    if(cb==n){
        cout<<ans<<endl;
        return;
    }
    if(ob<n) valid(ob+1,cb,ans+"(",n);;
    if(cb<ob) valid(ob,cb+1,ans+")",n);
}
int main(){
    int n = 3;
    valid(0,0,"",n);
    // TC = 2^n
}
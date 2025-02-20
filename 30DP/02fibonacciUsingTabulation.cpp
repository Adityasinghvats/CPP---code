#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    int dp[n+1];
    dp[0] = 0; dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter you choice for n"<<endl;
    cin>>n;
    cout<<fibo(n);
}
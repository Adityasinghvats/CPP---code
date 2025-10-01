#include<bits/stdc++.h>
using namespace std;
// LC 62
// helper for recursion
int helper(int i, int j, int ec, int er, vector<vector<int>>& dp){
    if(i == ec && j == er) return 1;
    if(i > ec || j > er) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    return dp[i][j] = helper(i+1, j, ec, er, dp) + helper(i , j+1, ec, er, dp);
}
// simple recursion wihtouh memoization 
int uniquePaths(int m, int n) {
    if(m == 1 && n == 1) return 1;
    if(m == 0 || n == 0) return 0;
    return uniquePaths(m-1, n) + uniquePaths(m, n-1);
}
// using recusrion + memoization
int uniquePathsUsingMemo(int m, int n) {
    vector<vector<int>> dp(m, vector<int> (n, -1));
    return helper(0, 0, m-1, n-1, dp);
}
//using tabulation
int uniquePathsUsingTab(int m, int n) {
    int tab[m][n]; //TC o(mn)
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i == 0 || j == 0) tab[i][j] = 1;
            else tab[i][j] = tab[i][j-1] + tab[i-1][j];
        }
    }
    return tab[m-1][n-1];
}
int main(){
    cout<<"No of paths: "<<uniquePathsUsingTab(23,12);
    return 0;
}
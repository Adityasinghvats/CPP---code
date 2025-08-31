#include<bits/stdc++.h>
using namespace std;
// Rcursion + Memoization
int helper(int i, int j, int er, int ec ,vector<vector<int>>& dp, vector<vector<int>>& grid){
        if(i == er && j == ec) return 1;
        if(i > er || j > ec) return 0;
        if(grid[i][j] == 1){
            dp[i][j] = 0;
            return 0;
         }
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = helper(i, j+1, er, ec, dp, grid)+ helper(i+1, j, er, ec, dp, grid);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if(grid[m-1][n-1] == 1) return 0;
        vector<vector<int>> dp(m, vector<int> (n, -1));
        return helper(0, 0, m-1, n-1, dp, grid);
    }

// Tabulation
int uniquePathsObstaclesUsingTab(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    
    // Check if start or end cell has obstacle
    if(grid[0][0] == 1 || grid[m-1][n-1] == 1) return 0;
    
    // Initialize dp table with 0s
    vector<vector<int>> tab(m, vector<int>(n, 0));
    
    // Initialize first cell
    tab[0][0] = 1;
    
    // Initialize first row
    for(int j = 1; j < n; j++) {
        if(grid[0][j] == 0) {
            tab[0][j] = tab[0][j-1];
        }
    }
    
    // Initialize first column
    for(int i = 1; i < m; i++) {
        if(grid[i][0] == 0) {
            tab[i][0] = tab[i-1][0];
        }
    }
    
    // Fill the rest of the table
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(grid[i][j] == 0) {
                tab[i][j] = tab[i-1][j] + tab[i][j-1];
            }
        }
    }
    
    return tab[m-1][n-1];
}
int main(){
    vector<vector<int>> grid = {{0,0,0},{0,1,0},{0,0,0}};
    cout<<"No of paths: "<<uniquePathsObstaclesUsingTab(grid);
    return 0;
}
/*
Edge cases 
- where destination is 1 (obstacle)
- there is only 1 row or column with obstacle in between
*/
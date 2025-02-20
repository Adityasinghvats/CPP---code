#include<bits/stdc++.h>
using namespace std;
int ans;

bool canWeGo(int n,int i, int j, vector<vector<int>>& maze){
    return i>=0 and j>=0 and i<n and j<n and maze[i][j] == 0;
}

void f(vector<vector<int>>& maze, int n, int i, int j){
    if(i == n-1 and j == n-1){//base case
        ans+=1;
        return;
    }
    maze[i][j] = 2;//visited
    //left
    if(canWeGo(n, i, j-1, maze)){
        f(maze, n, i, j-1);
    }
    //up
    if(canWeGo(n, i-1, j, maze)){
        f(maze, n, i-1, j);
    }
    //right
    if(canWeGo(n, i, j+1, maze)){
        f(maze, n, i, j+1);
    }
    //down
    if(canWeGo(n, i+1, j, maze)){
        f(maze, n, i+1, j);
    }
    //revert back to initial state
    maze[i][j] = 0;
}

int func(vector<vector<int>>& maze, int n){
    ans = 0;
    f(maze, n, 0, 0);
    return ans;
}
int main(){
    int n = 7;
    vector<vector<int>> maze = {
        {0,0,1,0,0,1,0},
        {1,0,1,1,0,0,0},
        {0,0,0,0,1,0,1},
        {1,0,1,0,0,0,0},
        {1,0,1,1,0,1,0},
        {1,0,0,0,0,1,0},
        {1,1,1,1,0,0,0}
    };
    cout<<func(maze, n);
    return 0;
}
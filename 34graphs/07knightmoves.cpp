#include<bits/stdc++.h>
using namespace std;
    //8 diurections for 8 movements of knight
    vector<vector<int>> dir = {{-1, 2}, {-2, 1}, {1, 2}, {2, 1}, {1,-2}, {2, -1}, {-1, -2}, {-2, -1}};
    int rows;
    int cols;
    vector<vector<int>> h;
    vector<vector<bool>> bfs(queue<pair<pair<int, int>, int>>& qu){
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        while(not qu.empty()){
            auto cell = qu.front();
            qu.pop();
            int i = cell.first.first;
            int j = cell.first.second;
            visited[i][j] = true;
            for(int d=0; d<8; d++){
                int newRow = i + dir[d][0];
                int newCol = j + dir[d][1];
                if(newRow < 0 or newCol < 0 or newRow >= rows or newCol >= cols)continue;
                if(visited[newRow][newCol]) continue; 
                if(not visited[newRow][newCol] && h[newRow][newCol] == 1){
                    h[newRow][newCol] = h[i][j]+1;
                    int val = h[newRow][newCol];
                    visited[newRow][newCol] = true;
                    qu.push({{newRow, newCol}, val});
                }
            }
        }
        return visited;
    }
    int updateMatrix(vector<vector<int>>& mat) {
       rows = mat.size();
       cols = mat[0].size();
       h = mat;
       queue<pair<pair<int, int>, int>> zeropos;
       zeropos.push({{0, 0}, 0});
       vector<vector<bool>> zero = bfs(zeropos);
    //    find minimum distance among visited nodes
       int maxEle;
       for(int i=0;i<rows; i++){
        for(int j=0; j<cols; j++){
            if(zero[i][j]){
                maxEle = max(maxEle, h[i][j]);
            }
        }
       }
       return maxEle;
    }
int main(){
    // size of matrix -300 to 300 
    // knight present at {0, 0} and need to go to a destination corrdinate
    //  can move in steps which are allowed for a knight
    vector<vector<int>> mat = {{0,0,0},{0,1,0},{1,1,1}};
    int ans = updateMatrix(mat);
    return 0;
}
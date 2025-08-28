#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int rows;
    int cols;
    vector<vector<int>> h;
    vector<vector<bool>> bfs(queue<pair<int,int>>& qu){
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        while(not qu.empty()){
            auto cell = qu.front();
            qu.pop();
            int i = cell.first;
            int j = cell.second;
            visited[i][j] = true;
            for(int d=0; d<4; d++){
                int newRow = i + dir[d][0];
                int newCol = j + dir[d][1];
                if(newRow < 0 or newCol < 0 or newRow >= rows or newCol >= cols)continue;
                if(visited[newRow][newCol]) continue; 
                if(not visited[newRow][newCol] && h[newRow][newCol] == 1){
                    h[newRow][newCol] = h[i][j]+1;
                    visited[newRow][newCol] = true;
                    qu.push({newRow, newCol});
                }
            }
        }
        return visited;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       //Brute force, start bfs from every cell where value is 1 TC (m*n) (v+e)
       //I would solve this problem using bfs where each cell will
       //check for next level and get 1 if there is a 0 or just increment if there is no
       //second thing is we call add values from one cell to other cell 

       // Multisource BFS from 1 will be ineffiecinet and haphazard
       // Reverse BFS with multisource from 0
       // Take a new matrix and fill it up with 0 at 0 and rest will calc
       rows = mat.size();
       cols = mat[0].size();
       h = mat;
       queue<pair<int, int>> zeropos;
       for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(h[i][j] == 0) zeropos.push({i,j});
        }
       }
       vector<vector<bool>> zero = bfs(zeropos);
       for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<h[i][j]<<" ";
        }
        cout<<"\n";
       }
       return h;
    }
int main(){
    vector<vector<int>> mat = {{0,0,0},{0,1,0},{1,1,1}};
    vector<vector<int>> ans = updateMatrix(mat);
    return 0;
}
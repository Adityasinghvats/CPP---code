#include<bits/stdc++.h>
using namespace std;
// LC 130
    int rows, cols;
    vector<vector<int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    void bfs(queue<pair<int, int>>& qu, vector<vector<char>>& board){
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        while(!qu.empty()){
            auto cell = qu.front();
            qu.pop();
            int i = cell.first;
            int j = cell.second;
            visited[i][j] = true;
            if(board[i][j] != 'O') continue;
            board[i][j] = '-';
            for(int d=0; d<4; d++){
                int newRow = i + dir[d][0];
                int newCol = j + dir[d][1];
                if(newRow < 0 or newCol < 0 or newRow >= rows or newCol >= cols)continue;
                if(not visited[newRow][newCol] && board[newRow][newCol] == 'O'){
                    qu.push({newRow, newCol});
                }
            }
        }
    }
   void solve(vector<vector<char>>& board) {
        rows = board.size();
        cols = board[0].size();
        queue<pair<int, int>> zeropos;
        // multisocurce bfs for all zero at border areas
        for(int j=0; j<cols; j++) {
            if(board[0][j] == 'O') zeropos.push({0, j});
            if(board[rows-1][j] == 'O') zeropos.push({rows-1, j});
        }
        for(int i=0; i<rows; i++) {
            if(board[i][0] == 'O') zeropos.push({i, 0});
            if(board[i][cols-1] == 'O') zeropos.push({i, cols-1});
        }
        bfs(zeropos, board);
        for(int i=0; i<rows; i++){
          for(int j=0; j<cols; j++){
            if(board[i][j] == 'O') board[i][j] = 'X';
            else if(board[i][j] == '-') board[i][j] = 'O';
          }
        }
    }
    int main(){
        vector<vector<char>> board = {{'O','O','O'},{'O','O','O'},{'O','O','O'}};
        solve(board);
        for(auto& row : board) {
        for(char c : row) cout << c << " ";
        cout << endl;
    }
    return 0;
    }
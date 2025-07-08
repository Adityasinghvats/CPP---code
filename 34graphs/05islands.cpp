#include<iostream>
#include<vector>
#include<queue>
using namespace std;
    //also make using dfs recursion
    //TC(m+n) SC (m+n)

    // void dfs(int rowIdx, int colIdx, vector<vector<char>>& grid, int rows, int cols){
    //     queue<pair<int, int>> q;
    //     q.push({rowIdx, colIdx});
    //     while(not q.empty()){
    //         auto curr = q.front();
    //         q.pop();
    //         int currRow = curr.first;
    //         int currCol = curr.second;
    //         //check up
    //         if( currRow-1 >= 0 and grid[currRow-1][currCol] == '1'){
    //             q.push({currRow-1, currCol});
    //             grid[currRow-1][currCol] == '0';
    //         }
    //         if( currRow+1 < rows and grid[currRow+1][currCol] == '1'){
    //             q.push({currRow+1, currCol});
    //             grid[currRow+1][currCol] == '0';
    //         }
    //         if( currCol-1 >= 0 and grid[currRow][currCol-1] == '1'){
    //             q.push({currRow, currCol-1});
    //             grid[currRow][currCol-1] == '0';
    //         }
    //         if( currCol+1 < cols and grid[currRow][currCol+1] == '1'){
    //             q.push({currRow, currCol+1});
    //             grid[currRow][currCol+1] == '0';
    //         }
    //     }
    // }
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j]=='0'){
                   continue; 
                }
                res++;
                grid[i][j] = '0';
                // dfs(i, j, grid, rows, cols);
                queue<pair<int, int>> q;
        q.push({i, j});
        while(not q.empty()){
            cout<<"inside while"<<endl;
            auto curr = q.front();
            q.pop();
            int currRow = curr.first;
            int currCol = curr.second;
            //check up
            if( currRow-1 >= 0 and grid[currRow-1][currCol] == '1'){
                q.push({currRow-1, currCol});
                grid[currRow-1][currCol] = '0';
            }
            if( currRow+1 < rows and grid[currRow+1][currCol] == '1'){
                q.push({currRow+1, currCol});
                grid[currRow+1][currCol] = '0';
            }
            if( currCol-1 >= 0 and grid[currRow][currCol-1] == '1'){
                q.push({currRow, currCol-1});
                grid[currRow][currCol-1] = '0';
            }
            if( currCol+1 < cols and grid[currRow][currCol+1] == '1'){
                q.push({currRow, currCol+1});
                grid[currRow][currCol+1] = '0';
            }
        }
            }
        }
        return res;
    }
int main(){
    vector<vector<char>> grid = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };
    cout<<numIslands(grid);
}
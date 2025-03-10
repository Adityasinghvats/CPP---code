#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isSafe(vector<vector<char>>& board, int r, int c, int j){
            //check entire row
            for(int i=0;i<9;i++){
                if(board[r][i] -'0' == j) return false;
            }
            //check entire column
            for(int i=0;i<9;i++){
                if(board[i][c] -'0' == j) return false;
            }
            //find big  cell
            int x = (r/3)*3;
            int y = (c/3)*3;
    
            //check entire box
            for(int m=x; m<x+3; m++){
               for(int n=y; n<y+3; n++){
                  if(board[m][n] -'0' == j) return false;
               } 
            }
            return true;
        }
        bool f(vector<vector<char>>& board, int r, int c){
            if(r==9) return true;
            if(c==9) return f(board, r+1, 0);
            //if space is not empty move to next col
            if(board[r][c] != '.') return f(board, r, c+1);
            //try placing each value 1-9 one by one
            for(int j=1 ;j<=9 ;j++){
                if(isSafe(board, r, c, j)){
                    board[r][c] = '0'+ j;
                    //recusively place the values and get a bool r
                    bool retval = f(board, r, c+1);
                    if(retval) return true;
                    //prune
                    board[r][c] = '.';
                }
            }
            return false;
        }
        void solveSudoku(vector<vector<char>>& board) {  
            f(board, 0, 0);
        }
    };
int main(){
    return 0;
}
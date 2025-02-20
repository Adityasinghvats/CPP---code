#include<bits/stdc++.h>
using namespace std;
//Tc 0(n!)

vector<vector<char>> grid;
vector<vector<string>> result;

bool canPlaceQueen(int row, int col, int n){
    //check for bottom attack
    for(int i=row-1;i>=0;i--){
        if(grid[i][col]=='Q') return false;
    }
    //left diagonal check
    for(int i=row-1, j=col-1; i>=0 and j>=0 ;i--, j--){
        if(grid[i][j]=='Q') return false;
    }
    //right diagonal check
    for(int i=row-1, j=col+1; i>=0 and j<n ;i--, j++){
        if(grid[i][j]=='Q') return false;
    }
    return true;
//no need to check same row attack as we can only place 1 in 1 row
//need to check top and diagonal attack
}

void func(int row, int n){
    if(row == n){
        //got a possible answer
        for(int i=0;i<n;i++){
          for(int j=0;j<n; j++){
            cout<<grid[i][j]<<" ";
          }
          cout<<"\n";
        }  
        cout<<endl;
        return;
    }
    // if(row == n){
    //     vector<string> temp;
    //     for(int i=0;i<n;i++){
    //       string res = "";
    //       for(int j=0;j<n; j++){
    //         res += grid[i][j];
    //       }
    //       temp.push_back(res);
    //     }  
    //     result.push_back(temp);
    //     return;
    // }

    for(int col=0;col<n;col++){
        if(canPlaceQueen(row, col, n)){
            grid[row][col] = 'Q';
            func(row+1, n);//try to place other queens in next boxes
            //backtracking step called pruning - whether you find it or not , 
            //on coming back return it to orignal state
            grid[row][col] = '.';
        }
    }
}

vector<vector<string>> nqueen(int n){
    grid.clear();
    result.clear();
    grid.resize(n, vector<char> (n, '.'));
    func(0 ,n);
    return result;
}


int main(){
    nqueen(4);
    return 0;
}
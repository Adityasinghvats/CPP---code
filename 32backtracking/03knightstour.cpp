#include<iostream>
#include<vector>
using namespace std;

bool canGo(vector<vector<int>> &grid, int n, int i, int j){
    return i>=0 and j>=0 and i<n and j<n and grid[i][j]==-1;
}

vector<int> dx{-2, -1, -2, -1, +2, +1, +2, +1};
vector<int> dy{+1, +2, -1, -2, +1, +2, -1, -2};

void display(vector<vector<int>>& grid,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
          cout<<grid[i][j]<<"\t";
        }
        cout<<"\n";
      }  
      cout<<endl;
}

void func(vector<vector<int>>& grid, int i, int j, int n, int count){
    if(count == n*n - 1){
        //last position
        grid[i][j] = count;
        display(grid, n);
        grid[i][j] = -1;
        return;
    }
    //8 moves in total for a knight
    // top left & right , bottom left & right
    
    for(int k=0;k<8;k++){
        if(canGo(grid, n, i + dx[k], j + dy[k])){
            grid[i][j] = count;
            func(grid, i + dx[k], j + dy[k], n, count+1);
            grid[i + dx[k]][j + dy[k]] = -1;
        }
    }
    
}

void knightTour(int n, int i, int j){
    vector<vector<int>> grid(n, vector<int> (n, -1));
    func(grid, i, j, n, 0);
}

int main(){
    knightTour(5, 0, 0);
    return 0;
}
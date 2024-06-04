#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int brr[3][2] = {{1,2},{4,5},{7,8}};
    // Resultant matrix has row of first matrix and column from second
    int res[2][2];
    // MUltiply possible only if first col = second row
    int comnum = 3;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j] = 0;
            for(int k=0;k<comnum;k++){
                res[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
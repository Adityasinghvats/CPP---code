#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    int rowandcolumn = (2*n-1);
    for(int i=1;i<=rowandcolumn;i++){
        for(int j=1;j<=rowandcolumn;j++){
            // if(i<=j) cout<<i<<" ";
            // else cout<<j<<" ";

            // cout<<min(i,j)<<" ";
            int row = i,col = j;
            if(row>n) row = 2*n - i;
            if(col>n) col = 2*n - j;
            int val = min(row,col);

            cout<<n-val+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
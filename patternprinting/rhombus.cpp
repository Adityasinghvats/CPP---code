#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows and columns:";
    cin>>m;
    for(int i = 1;i<=m;i++){
        for(int j = 1 ;j<=m-i;j++){/*For spaces we need extra loop*/
            cout<<"  ";
        }
        for(int k = 1;k<=m;k++){/*For stars*/
            cout<<'*'<<" ";

        }
        cout<<"\n";    
    }

}
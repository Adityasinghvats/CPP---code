#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows and columns:";
    cin>>m;
    int a =1;
    for(int i = 1;i<=m;i++){
        
        for(int j = 1;j<=i;j++){
            cout<<a<<" ";
            a += 1;
        }
        cout<<"\n";
    }
}
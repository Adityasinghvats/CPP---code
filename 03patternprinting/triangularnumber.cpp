#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows and columns:";
    cin>>m;


    for(int i = 1;i<=m;i++){
        
        for(int j = 1;j<=i;j++){
            std::cout<<j<<" ";
        }
        cout<<"\n";
    }


    for(int i = 1;i<=m+1; i++){
        cout<<i<<" ";
    }
    cout<<"\n";


    for(int i = 1;i<=m;i++){
        
        for(int j = 1;j<=m+1-i;j++){
            std::cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}
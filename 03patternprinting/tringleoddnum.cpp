#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows and columns:";
    cin>>m;
    for(int i = 1;i<=m;i++){
        int a = 1;
        for(int j = 1;j<=i;j++){
            std::cout<<a<<" ";
            a = a+2;
        }
        
        cout<<"\n";
    }
}
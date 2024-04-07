#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows and columns:";
    cin>>m;
    for(int i =1;i<=m;i++){
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=1+((i-1)*2);j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
      for(int i =1;i<=m;i++){
        int d = 1;
        for(int j=1;j<=m-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=1+((i-1)*2);j++){
            char ch = (char)(64+d);
            cout<<ch<<" ";
            d++;
        }
        cout<<"\n";
    }
} 
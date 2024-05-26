#include<iostream>
using namespace std;
int main(){
    int sheet[2][4];
    for(int i = 0;i<2;i++){
        cout<<"Enter marks for student "<<i+1<<endl;
        for(int j = 0;j<4;j++){
            cout<<"Enter marks of "<<j+1<<" subject:";
            cin>>sheet[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0;i<2;i++){
        for(int j = 0;j<4;j++){
            cout<<sheet[i][j]<<" ";
        }cout<<endl;
    }
}
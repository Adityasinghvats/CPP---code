#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    cout<<"Enter the matrix:";
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
        cout<<"\n";
    } 
    int transpose[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            transpose[i][j]=arr[j][i];
        }
        cout<<"\n";
    }                                                                                   
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
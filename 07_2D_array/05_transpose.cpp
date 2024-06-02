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
    // Tranpose by column wise printing
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int transpose[4][3];
    return 0;
}
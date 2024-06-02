#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
     cout<<"Enter the matrix:";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(i==j) break;
    //         else{
    //             int temp = arr[i][j];
    //             arr[i][j] = arr[j][i];
    //             arr[j][i] = temp;
    //         }
    //     }
    // }


     for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            
        }
    }


    // Matrix Tranposeed in itself
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
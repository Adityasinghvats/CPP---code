#include<iostream>
using namespace std;
int main(){
    int arr[][3] = {14,92,73,54,25,6};
    int max = arr[0][0];
    for(int i = 0;i<2;i++){
        for(int j = 0;j<4;j++){
            if(arr[i][j]>max) max = arr[i][j];
        }
    }
    cout<<max;
}
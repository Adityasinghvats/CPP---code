#include<iostream>
using namespace std;
/*
Tc = 0(n^2)
Unstable sort
*/

int main(){
    int arr[] = {5,4,3,1,2};
    int n = 5;
    for(int i=0;i<n-1;i++){
        int min = INT16_MAX;
        int minidx = -1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
            min = arr[j];
            minidx = j;
           }
        }
        swap(arr[i],arr[minidx]);
    }

    for(int i:arr){
        cout<<i<<" ";
    }
}
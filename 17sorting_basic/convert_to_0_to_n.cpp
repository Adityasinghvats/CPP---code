#include<bits/stdc++.h>
using namespace std;
//if all numbers in array are positive
int main(){
    int arr[] = {19,12,23,8,16};
    int n = 5;
    int count = 0;
    for(int i=0;i<n;i++){
        int min = INT16_MAX;                                
        int minidx = -1;
        for(int j=0;j<n;j++){
            if(arr[j]<=0) continue;
            else{
                if(arr[j]<min){
                    min = arr[j];
                    minidx = j;
                }
            }
        }
      arr[minidx] = -count;
      count++;
    }
    for(int ele:arr){
        cout<<-(ele)<<" ";
    }
    
}
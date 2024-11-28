#include<bits/stdc++.h>
using namespace std;
void cyclesort(int *arr,int n){
    int i = 0;
    while(i<n){
        int correctIdx = arr[i]-1;
        if(i == correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
}
int main(){
    int arr[] = {5,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cyclesort(arr,n);
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}
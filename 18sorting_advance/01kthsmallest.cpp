#include<bits/stdc++.h>
using namespace std;
void cyclesort(int *arr,int k){
    int i = 0;
    while(i<k){
        int correctIdx = arr[i]-1;
        if(i == correctIdx) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    cout<<arr[k-1]<<endl;
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cyclesort(arr,k);
    // for(int ele:arr){
    //     cout<<ele<<" ";
    // }
    return 0;
}
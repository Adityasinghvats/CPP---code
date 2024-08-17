#include<bits/stdc++.h>
using namespace std;
void subarray(int arr[],vector<int> v,int n,int idx){
    if(n==idx){
        for(int element:v){
        cout<<element;
        }
        cout<<endl;
        return;
    }
    subarray(arr,v,n,idx+1);
    v.push_back(arr[idx]);
    subarray(arr,v,n,idx+1);
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     for(int k=i;k<n;k++){
    //         for(int j=i;j<=k;j++){
    //             cout<<arr[j];
    //         }
    //         cout<<endl;
    //     }
    // }
    vector<int> v;
    subarray(arr,v,n,0);
    
}
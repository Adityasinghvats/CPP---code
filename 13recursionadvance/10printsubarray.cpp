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
    // Right subtree push back is done if vector is empty
    if(v.size()==0){
        v.push_back(arr[idx]);
        subarray(arr,v,n,idx+1);
    }
    // Right subtree push back done only if last element of vector is equal to the element in array just before idx
    else if(arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
        subarray(arr,v,n,idx+1);
    }
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
#include<bits/stdc++.h>
using namespace std;
void subset(int arr[],int n,vector<int> sub,int k,int idx){
    if(n==idx){
        if(sub.size()==k){
            for(int i =0;i<sub.size();i++){
                cout<<sub[i];
            }
            cout<<endl;
        }
        return;
    }
    if(sub.size()+(n-idx) < k) return;
    subset(arr,5,sub,k,idx+1);
    sub.push_back(arr[idx]);
    subset(arr,5,sub,k,idx+1);
}
int main(){
    int arr[] = {1,2,3,4,5};
    // K is size of subsequence
    int k = 3;
    vector<int> sub;
    subset(arr,5,sub,k,0);
}
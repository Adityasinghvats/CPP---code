#include<bits/stdc++.h>
//morre efficient majority element algo
// works on arrays
using namespace std;
int isMajorityElement(int *v,int n){
    int majority_ele = -1;
    int votes = 0;
    for(int i=1;i<n;i++){
        if(votes==0){
            majority_ele = v[i];
            votes = 1;
        }
        else{
            if(v[i]==majority_ele) votes++;
            else votes--;
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i]==majority_ele){
            count++;
        }
    }
    if(count>n/2){
        return majority_ele;
    }
    return -1;
}
int main(){
    int arr[] = {1,1,1,1,2,3,4};
    int n = 7;

    cout<<isMajorityElement(arr,n);
}
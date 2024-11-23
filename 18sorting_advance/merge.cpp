#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){
    int i=0, j=0, k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    if(i>=a.size()){
        while(j<b.size()){
            res[k++] = b[j++];
        }
    }
    if(j>=b.size()){
        while(i<a.size()){
            res[k++] = a[i++];
        }
    }
}
int main(){
    int arr[] = {1,4,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> a(arr,arr+n);
    return 0;
}
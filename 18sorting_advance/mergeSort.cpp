#include<bits/stdc++.h>
using namespace std;
// TC = O(nlogn)
// stable
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

void mergeSort(vector<int> &v){
    int n = v.size();
    //base case
    if(n==1) return;
    int n1 = n/2, n2 = n-(n/2);
    vector<int> a(n1), b(n2);
    //copying in new arrays
    for(int i=0;i<n1;i++) a[i] = v[i];
    for(int i=0;i<n2;i++) b[i] = v[n1+i];
    //recursion
    mergeSort(a);
    mergeSort(b);
    //merge
    merge(a,b,v);
}

int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int ele:v) cout<<ele<<" ";
    cout<<endl;
    mergeSort(v);
    for(int ele:v) cout<<ele<<" ";
    return 0;
}
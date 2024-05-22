#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &arr1,vector<int> &arr2){
    int m = arr1.size();
    int n = arr2.size();
    // Created 3 pointers
    int i = 0, j = 0, k = 0;
    vector<int> v(m+n);
    while(i<=m-1 && j<=n-1){
         if(arr1[i]<arr2[j]){
            v[k] = arr1[i];
            i++;
        }else{
            v[k] = arr2[j];
            j++;
        }
        k++;
    }
    // Arr2  k sare elemenst uhta chuka hoon to arr2 k baki elemnst daal do
    if(i==m){
        while (j<=n-1)
        {
            v[k] = arr2[j];
            j++;k++;
        }
        
    }
    // Arr2 k sare elements utha chuka hoon
    if(j==n){
        while(i<=m-1){
            v[k] = arr2[i];
            i++;k++;
        }
    }
    return v;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);

    vector<int> arr2;
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(6);
    arr1.push_back(7);
    arr1.push_back(9);

    vector<int> res = merge(arr1,arr2);
    for(int i = 0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
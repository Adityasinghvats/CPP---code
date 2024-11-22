#include<bits/stdc++.h>
using namespace std;
/*
TC = O(n^2)
Stable sort 
Adjacent sorting algo of bubble and insertion are stable
*/
int main(){
    int arr[] = {5,3,4,2,1};
    int n = 5;
    for(int i=1;i<n;i++){

        // for(int j=i;j>=0;j--){
        //     if(arr[j]<arr[j-1]){
        //         swap(arr[j],arr[j-1]);
        //     }else break;
        // }

        int j = i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int ele:arr){
        cout<<ele<<" ";
    }
}
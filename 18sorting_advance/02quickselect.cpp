#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int strt, int end){
    int pivotele = arr[(strt+end)/2];
    int count = 0;
    for(int i=strt; i<end; i++){
        if(i==(strt+end)/2) continue;
        if(arr[i]<=pivotele) count++;
    }
    int pivotIdx = count + strt;
    swap(arr[(strt+end)/2],arr[pivotIdx]);
    
    int i=strt, j=end;
    while(i<pivotIdx && pivotIdx<j){
        if(arr[i]<=pivotele) i++;
        if(arr[j]>pivotele) j--;
        else if(arr[i]>pivotele && arr[j]<=pivotele){
            swap(arr[i],arr[j]);
            i++; j--;
        }
    } 
    return pivotIdx;
}
int kthsmallest(int arr[],int strt, int end,int k){
    int pivotidx = partition(arr,strt,end);
    if(pivotidx+1 == k) return arr[pivotidx];
    else if(pivotidx+1 < k) { //do not take smaller than current index in consideration 
        return kthsmallest(arr,pivotidx+1,end,k);
    }else{ //pivotidx>k
        return kthsmallest(arr,strt,pivotidx-1,k);
    } 
}
int main(){
    int arr[] = {5,1,8,-8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<kthsmallest(arr,0,n-1,k);
    return 0;
}
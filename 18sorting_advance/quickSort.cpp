#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int strt, int end){
    int pivotele = arr[strt];
    int count = 0;
    for(int i=strt+1; i<end; i++){
        if(arr[i]<=pivotele) count++;
    }
    int pivotIdx = count + strt;
    swap(arr[strt],arr[pivotIdx]);
    
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
void quickSort(int arr[],int strt, int end){
    if(strt>=end) return;
    int pivotidx = partition(arr,strt,end);

    quickSort(arr,strt,pivotidx-1);
    quickSort(arr,pivotidx+1,end);
}
int main(){
    int arr[] = {5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int ele:arr){
        cout<<ele<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
// FInd first occurance of a no in sorted array
int main(){
 int arr[13] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
 int hi = 12;
 int lo = 0;
 int target = 4;
 int idx = -1;
 while(lo<=hi){
    int mid = lo+(hi-lo)/2;
    if(arr[mid]==target){
        if(arr[mid-1]!=target){
            idx = mid;
            break;
        }else{
            hi = mid-1;
        }
    }
    else if(arr[mid]<target) lo = mid+1;
    else if(arr[mid]>target) hi = mid-1;
 }
 cout<<idx<<endl;
}
// Output -> 8 index of 4 first occ
// Do leetcode question
#include<iostream>
using namespace std;
int binarySearch(int arr[],int target,int size){
    int start = 0;
    int end = size - 1 ;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]<target){
            start = mid+1;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
    }
}
int main(){
    int arr[] = {6,14,34,43,54,67,79,89,90};
    int target;
    cout<<"Enter the element to search:";
    cin>>target;
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = binarySearch(arr,target,size);
    cout<<index;
    return 0;
}
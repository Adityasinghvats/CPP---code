#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int size){
    for (int i=1;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapify(int arr[], int n, int i){
    while(true){
        int left = (2*i), right = (2*i)+1;
        if(left>=n) break;//means no child
        if(right>=n){//left may exist
                if(arr[i]>arr[left]){
                    swap(arr[i],arr[left]);
                    i = left;   
                }
                break;
        }
        if(arr[left]<arr[right]){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i = left;
            }else break;
        }else{
            if(arr[i]>arr[right]){
                swap(arr[i],arr[right]);
                i = right;
            }else break;
        }
    }
}
int main(){
    int arr[] = {-1, 10, 2, 14, 11, 1, 4};
    int size = sizeof(arr)/sizeof(arr[1]);
    print(arr, size);
    for(int i=size/2; i>=1;i--){//using propery where no of leaf nodes = n/2
        heapify(arr, size, i);
    }
    print(arr, size);
    return 0;
}
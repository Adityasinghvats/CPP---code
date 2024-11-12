#include<bits/stdc++.h>
using namespace std;
int unique(int arr[],int n){
    int temp = 0;
    for(int i=0;i<n;i++){
        temp = temp ^ arr[i];
    }
    return temp;
}
int main(){
    int arr[] = {1,1,5,6,6,7,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unique no is: "<<unique(arr,size);
}
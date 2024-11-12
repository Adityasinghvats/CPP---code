#include<bits/stdc++.h>
using namespace std;
int unique(int *arr,int n){
    int res = 0;
    for(int i=0;i<n;i++) res = res ^ arr[i];
    int temp = res;
    int k = 0;
    //find position of significant set bit
    while(true){
        if((temp & 1) == 1){
            break;
        }
        temp = temp >> 1;
        k++;
    }
    // traverse the array to find the one element with set bit a k position
    int retval = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        if(((num>>k) & 1) == 1) retval = retval ^ num;
    }
    cout<<retval<<"\n";
    res = res ^ retval;
    cout<<res<<endl;
}
int main(){
    int arr[] = {1,1,5,6,3,6,7,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    unique(arr,size);
}
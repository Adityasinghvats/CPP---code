#include<iostream>
using namespace std;
int main(){
    // Value just smaller than the target which is not availabe in the given array
    int arr[9] = {1,2,7,13,14,19,21,25,26};
    int size = 9;
    int n = 18;
    // for(int i=0;i<9;i++){
    //     if(arr[i]>n){
    //         cout<<arr[i-1]<<endl;
    //         break;
    //     }
    // }
    int lo = 0;
    int hi = 8;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==n){
            cout<<arr[mid-1];
            flag = true;
            break;
        }
        else if(arr[mid]<n) lo = mid+1;
        else if(arr[mid]>n) hi = mid-1;
    }
    if(flag==false) cout<<arr[hi]<<endl<<arr[lo];
}
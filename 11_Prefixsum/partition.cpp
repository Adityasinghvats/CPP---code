// Check if array can be partitioned into 2 continuous arrays of equal sum
#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
    int lo = 0;
    int hi = n-1;
    bool flag = false;

    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            cout<<"Partition found";
            flag = true;
            break;
        }
    }
    if(flag==false){
        cout<<"Not found!";
    }

}
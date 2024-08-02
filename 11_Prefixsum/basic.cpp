#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,4,5,3,2,7,6};

    // int sum = 0;
    // int prefixarr[7];
    // for(int i = 0;i<7;i++){
    //     sum += arr[i];
    //     prefixarr[i] = sum;
    // }
    // cout<<"Preix Sum Array :"<<endl;
    // for(int i = 0;i<7;i++){
    //     cout<<prefixarr[i]<<" ";
    // }

    // Without using extra array
    for(int i = 1;i<7;i++){
            arr[i] = arr[i] + arr[i-1];
        }
    for(int i = 1;i<7;i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main(){
    // int size,arr[size];
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    for(int i = 0; i<5; i++){
        cout<<&arr[i]<<" ";
    }
    return 0;
}
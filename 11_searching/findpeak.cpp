#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,5,4,2};
    for(int i = 1;i<4;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cout<<arr[i];
            break;
        }
    }
}
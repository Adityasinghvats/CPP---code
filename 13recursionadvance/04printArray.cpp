#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[],int size,int idx){
    if(idx>=size) return;
    int num = arr[idx];
    cout<<num<<" ";
    printArray(arr,size,idx+1);
}
int main(){
    int arr[5] = {1,2,3,4,5};
    printArray(arr,5,0);
}
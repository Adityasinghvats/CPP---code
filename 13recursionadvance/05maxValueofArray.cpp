#include<iostream>
#include<vector>
using namespace std;
// void printArray(int arr[],int size,int idx,int max){
//     if(idx==size){
//         cout<<max;
//         return;
//     }
//     if(arr[idx]>max) max = arr[idx];
//     printArray(arr,size,idx+1,max);
// }
int maxNumber(int arr[],int size,int idx){
    if(idx==size) return INT16_MIN;
    return max(arr[idx],maxNumber(arr,size,idx+1));

}
int main(){
    int arr[5] = {1,2,6,3,5};
    // printArray(arr,5,0,INT16_MIN);
    cout<<maxNumber(arr,5,0);
}
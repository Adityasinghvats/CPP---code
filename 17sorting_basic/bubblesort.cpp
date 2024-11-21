#include<iostream>
using namespace std;

// Bubble sort is a stable sort
// Max swaps = n(n-1)/2

// bool sorted_or_not(int *arr,int n){
//     bool flag = true;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             flag = false;
//             break;
//         }
//     }
//     return flag;
// }

int main(){
    int arr[] = {5,-4,3,1,2};
    int n = 5;
    for(int i=0;i<n-1;i++){
        // if(sorted_or_not(arr,n)) break;

        bool sorted = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted = false;
            }
        }
        if(sorted==true){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
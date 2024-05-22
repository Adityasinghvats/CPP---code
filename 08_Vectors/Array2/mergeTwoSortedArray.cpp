#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr1[4] = {1,4,5,8};
    int arr2[5] = {2,3,6,7,9};
    int arr3[9];
    int i = 0; int j = 0; int k = 0;
    while(k<9){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
        }else{
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    for(int i = 0;i<9;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}
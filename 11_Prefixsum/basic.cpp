#include<iostream>
using namespace std;
int main(){
    int arr[7] = {1,4,5,3,2,7,6};
    int sum = 0;
    int prefixarr[7];
    for(int i = 0;i<7;i++){
        sum += arr[i];
        prefixarr[i] = sum;
    }
    for(int i = 0;i<7;i++){
        cout<<prefixarr[i]<<" ";
    }
}
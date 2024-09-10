#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT16_MIN;

    // for(int i=0;i<=n-k;i++){
    //     int sum = 0;
    //     for(int j=i;j<i+k;j++){
    //         sum += arr[j];
    //     }
    //     maxSum = max(sum,maxSum);
    // }

    int prevsum = 0;
    for(int i=0;i<k;i++){
        prevsum += arr[i];
    }
    maxSum = prevsum;
    // Sliding window
    int j = k;
    int i = 1;

    // Using extra variable
    // while(j<n){
    //     int curSum = prevsum + arr[j] - arr[i-1];
    //     if(curSum>maxSum){
    //         maxSum = curSum;
    //     }
    //     prevsum = curSum;
    //     i++;j++;
    // }
    // Using one variable 
    
    while(j<n){
        prevsum = prevsum + arr[j] - arr[i-1];
        if(maxSum<prevsum){
            maxSum = prevsum;
        }
        i++;
        j++;
    }
    cout<<maxSum<<endl;
}
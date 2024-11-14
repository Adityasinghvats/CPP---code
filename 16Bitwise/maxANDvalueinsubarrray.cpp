#include<bits/stdc++.h>
//find length of longest subarray which has max possible bitwise and value
using namespace std;
int main(){
    int arr[] = {12,3,1,6,1,6,6,6,6,4,3,8,13,13,8};
    int n = 15;
    int count = 0;
    int ans = 0;
    int max_el = INT_MIN;
    for(int i = 0;i<n;i++){
         if(arr[i]>max_el){
            max_el = arr[i];
            count = 1;
         }else if(arr[i] == max_el){
            count++; 
         }
         ans = max(ans, count);
    }
    cout<<"Max length:"<<ans<<endl;
    cout<<"Max ele:"<<max_el<<endl;
    return 0;
}
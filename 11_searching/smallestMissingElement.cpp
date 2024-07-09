#include<iostream>
using namespace std;
// smallest missing element in sorted no negtive array
int main(){
    int arr[] = {0,1,2,3,4,8,9};
    // for(int i=0;i<7;i++){
    //     if(i != arr[i]){
    //          cout<<i<<endl;
    //          break;
    //     }
    // }
    int hi = 7,lo = 0;
    while(lo<=hi){
         int mid = lo+(hi-lo)/2;
        //  If no at mid is equal to idx all no before it are also at correct index
         if(mid == arr[mid]) lo = mid+1;
         if(mid != arr[mid]) hi = mid-1;
    }
    // Loops ends when hi<lo
    cout<<(hi+1);
}
// nEXT QUESTION LEETCODE 69
// SSH is network protocol used as asecure way to access a remote computer 
// It encrpts data being sent
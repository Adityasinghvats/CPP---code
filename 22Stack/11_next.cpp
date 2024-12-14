//find next greater element 
/*
arr = {2,3,5,1,2}
ans = {3,5,-1,2,-1}
Sc = 0(n), tc = 0(n)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans[n];
    ans[n-1] = -1;
    stack<int> st;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        //pop all elements <= arr[i]
        while(st.top()<=arr[i] && !st.empty()) st.pop();

        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();

        //push current element
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
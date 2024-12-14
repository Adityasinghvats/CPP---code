#include<bits/stdc++.h>
using namespace std; 
int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pgei[n];
    pgei[0] = -1;
    stack<int> st;
    st.push(0);
    //code for previous greater element
    for(int i=1;i<n;i++){
        //pop all elements <= arr[i]
        while(arr[st.top()]<=arr[i] && !st.empty()) st.pop();

        if(st.empty()) pgei[i] = -1;
        else pgei[i] = st.top();

        //push current element
        st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<i-pgei[i]<<" ";
    }
}
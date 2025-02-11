#include<iostream>
#include<queue>
using namespace std;
//cpp will make a max heap by default
// int ksmallest(vector<int>& v, int k){
//     //O(nlogn)
//     priority_queue<int, vector<int>, greater<int>> pq;//min heap
//     for(int i=0;i<v.size();i++){
//         pq.push(v[i]);
//     }
//     while(--k){
//         pq.pop();
//     }
//     return pq.top();
// }

int ksmallest(vector<int>& v, int k){
    //O(nlogk)
    priority_queue<int> pq;//max heap
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
        if(pq.size()>k) pq.pop();
    }
    return pq.top();
}
int main(){
    vector<int> v = {1,4,-10,45,56,78};
    int k = 4;
    cout<<ksmallest(v,k); 
}
#include<iostream>
#include<queue>
using namespace std;

//sort a k sorted array (mostly sorted array)

// void ksorted(vector<int>& v, int k, vector<int> &ans){
//     //O(nlogk)
//     priority_queue<int, vector<int>, greater<int>> pq;//min heap
//     for(int i=0;i<v.size();i++){
//         pq.push(v[i]);
//         if(pq.size()>k) {
//             ans.push_back(pq.top());
//             pq.pop();
//         }
//     }
//     while(!pq.empty()){
//         ans.push_back(pq.top());
//         pq.pop();
//     }
//     return;
// }

//without extra space
void ksorted(vector<int>& v, int k){
    //O(nlogk)
    priority_queue<int, vector<int>, greater<int>> pq;//min heap
    int idx = 0;
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
        if(pq.size()>k) {
            v[idx++] = pq.top();
            pq.pop();
        }
    }
    while(!pq.empty()){
        v[idx++] = pq.top();
        pq.pop();
    }
    return;
}
int main(){
    vector<int> v = {6,5,3,2,8,10,9};
    int k = 3;
    ksorted(v,k); 
    for(int ele:v){
        cout<<ele<<" ";
    }
}
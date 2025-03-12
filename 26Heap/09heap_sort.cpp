#include<iostream>
#include<queue>
//TC = nlogn , SC = O(n) 
using namespace std;
int main(){
    vector<int> v = {10, 1, 45, 56,-13, 78, 32};
    priority_queue<int, vector<int>, greater<int>> minh;
    for(int ele:v){
        minh.push(ele);
    }
    cout<<"Sorted order"<<endl;
    while(!minh.empty()){
        cout<<minh.top()<<" ";
        minh.pop();
    }
}
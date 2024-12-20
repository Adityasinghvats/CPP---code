#include<iostream>
#include<queue>
using namespace std;
/*
Remove all elements present at even positions
*/
void display(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void remove_at_even(queue<int> &q){
    int n = q.size();
    for(int i=0;i<n;i++){
        int x = q.front();
        q.pop();
        if(i%2 != 0) q.push(x);
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    remove_at_even(q);
    display(q);
}
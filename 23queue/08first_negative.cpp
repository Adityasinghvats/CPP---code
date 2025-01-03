#include<bits/stdc++.h>
//find first negative in window of size k
using namespace std;
int main(){
    vector<int> v {0,-1,-2,3,4,-5,6,7,-8};
    int k = 2; //window size
    //find all negative index and fill in queue
    queue<int> q;
    for(int i=0;i<v.size();i++){
        if(v[i]<0) q.push(i);
    }// q = {1,2,5,8}

    vector<int> ans;
    for(int i=0;i<=v.size()-k;i++){
        // in case start of window is aheead of idx in queue
        while(q.size()>0 && q.front()<i) q.pop();
        // // in case end of window is aheead of idx in queue
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else{
            int idx = q.front();
            ans.push_back(v[idx]);
        }
    }
    for(int ele:ans){
        cout<<ele<<" ";
    }
}
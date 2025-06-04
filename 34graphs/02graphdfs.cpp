#include<bits/stdc++.h>
using namespace std;
//LC 797
// we have taken a acyclic graph so we dont need to keep track of visited nodes
int target; //target node
vector<int> temp;
vector<vector<int>> res;
void dfs(vector<vector<int>> g, int curr = 0){
    temp.push_back(curr);
    if(curr == target) res.push_back(temp);
    else for(int node:g[curr]){
        dfs(g, node);
    }
    temp.pop_back();
}
int main(){
    vector<vector<int>> graph = {{1,2},{3},{3},{}};
    target = graph.size() - 1;
    dfs(graph);
    for(auto ele:res){
        for(auto num:ele){
            cout<<num<<" ";
        }cout<<endl;
    }
}
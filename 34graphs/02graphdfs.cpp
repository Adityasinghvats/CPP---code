#include<bits/stdc++.h>
using namespace std;
// LC 797
// we have taken a acyclic graph so we dont need to keep track of visited nodes
int target; //target node
vector<int> temp;
vector<vector<int>> res;
void dfs(vector<vector<int>>& g, int curr = 0){
    temp.push_back(curr);
    if(curr == target) res.push_back(temp);
    else for(int node:g[curr]){
        dfs(g, node);
    }
    temp.pop_back();
}

// for cyclic grpah where we need to keep track of visited nodes
unordered_set<int> visited;
void dfs_cyclic(vector<vector<int>>& g, int curr, int end){
    temp.push_back(curr);
    if(curr == end) {
        res.push_back(temp);
    }
    visited.insert(curr);
    for(auto neighbour:g[curr]){
        if(not visited.count(neighbour)){
            dfs_cyclic(g, neighbour, end);
        }
    }
    temp.pop_back();
    visited.erase(curr);
    return;
}

int main(){
    vector<vector<int>> graph = {{1,2},{3},{3},{}};
    target = graph.size() - 1;
    // dfs(graph);
    int x,y;
    cout<<"Enter starting and ending node"<<endl;
    cin>>x>>y;
    dfs_cyclic(graph, x, y);
    for(auto ele:res){
        for(auto num:ele){
            cout<<num<<" ";
        }cout<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;


vector<list <int>> graph;
int v;//no of vertices
void add_edge(int src, int dest, bool bi_dire = true){
    graph[src].push_back(dest);//push into list
    if(bi_dire){
        graph[dest].push_back(src);
    }
}

void dfs(int node, unordered_set<int> &visited){
    visited.insert(node);
    for(auto neighbour: graph[node]){
        if(not visited.count(neighbour)){
            dfs(neighbour, visited);
        }
    }
}

int connected_component(){
    int result = 0;
    unordered_set<int> visited;
    for(int i=0;i<v;i++){
        //go to all vertex
        //if from a vertex we can intitliase a dfs, we get a component
        if(visited.count(i) == 0){
            result++;
            dfs(i, visited);
        }
       
    }
    return result;
}
int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);
    }
    cout<<"No of connected components: "<<connected_component()<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
//traversal for cylcic graphs as well using visited list
//TC o(v+e)
//SC recursive stack
vector<list<int>> graph;
unordered_set<int> visited;
int v;//no of vertices
void add_edge(int src, int dest, bool bi_dire = true){
    graph[src].push_back(dest);//push into list
    if(bi_dire){
        graph[dest].push_back(src);
    }
}
void display(){
    cout<<"Given graph"<<endl;
    for(int i=0;i<graph.size();i++){
        cout<<i<<" --> ";
        for (auto el:graph[i]){
            cout<<el<<" , ";
        }
        cout<<endl;
    }
}
bool dfs(int curr, int end){
    if(curr==end) return true;
    visited.insert(curr);
    for(auto neighbour:graph[curr]){
        if(not visited.count(neighbour)){
            bool result = dfs(neighbour, end);
            if(result) return true;
        }
    }
    return false;
}

bool anyPath(int src, int dest){
    cout<<"Finding path from node "<<src<<" to node "<<dest<<endl;
    return dfs(src, dest);
}
int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    visited.clear();
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);
    }
    display();
    cout<<"Enter the nodes to find path for?"<<endl;
    int x, y;
    cin>>x>>y;
    cout<<(bool)anyPath(x,y)<<endl;
    return 0;
}

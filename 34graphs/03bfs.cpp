#include<bits/stdc++.h>
using namespace std;
//TC O(v+e)
//SC O(v) , max size of queue = no of vertices
//bfs is great to find shortest path
//djikstra is bfs for weighted graphs in a way
//number of levels between start and end is shortest path
vector<list<int>> undirected_unweighted_graph;
unordered_set<int> visited;
int v;//no of vertices
void add_edge(int src, int dest, bool bi_dire = true){
    undirected_unweighted_graph[src].push_back(dest);//push into list
    if(bi_dire){
        undirected_unweighted_graph[dest].push_back(src);
    }
}
void display(){
    for(int i=0;i<undirected_unweighted_graph.size();i++){
        cout<<i<<" --> ";
        for (auto el:undirected_unweighted_graph[i]){
            cout<<el<<" , ";
        }
        cout<<endl;
    }
}
void bfs(int src, vector<int> &dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX);
    //initiate distance array with 0
    dist[src] = 0;
    visited.insert(src);
    qu.push(src);
    while(not qu.empty()){
        int curr = qu.front();
        cout<<curr<<" ";
        qu.pop();
        for(auto neighbour:undirected_unweighted_graph[curr]){
            if(not visited.count(neighbour)){
                qu.push(neighbour);
                visited.insert(neighbour);
                dist[neighbour] = dist[curr]+1;
            }
        }
    }
    cout<<"\n";
}
int main(){
    cin>>v;
    undirected_unweighted_graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s,d);
    }
    vector<int> dist;
    cout<<"enter starting node"<<endl;
    int x;
    cin>>x;
    bfs(x, dist);
    for(int ele:dist){
        cout<<ele<<" --> ";
    }
    cout<<endl;
    // display();
    return 0;
}
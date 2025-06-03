#include<bits/stdc++.h>
//adjacency list with weight
using namespace std;
vector<list<pair<int, int>>> undirected_unweighted_graph;
int v;//no of vertices
void add_edge(int src, int dest,int wt, bool bi_dire = true){
    undirected_unweighted_graph[src].push_back({dest, wt});//push into list
    if(bi_dire){
        undirected_unweighted_graph[dest].push_back({src, wt});
    }
}
void display(){
    for(int i=0;i<undirected_unweighted_graph.size();i++){
        cout<<i<<" --> ";
        for (auto el:undirected_unweighted_graph[i]){
            cout<<"("<<el.first<<" "<<el.first<<")"<<" , ";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
    undirected_unweighted_graph.resize(v, list<pair<int, int>> ());
    int e;
    cin>>e;
    while(e--){
        int s, d, wt;
        cin>>s>>d>>wt;
        add_edge(s,d, wt);
    }
    display();
    return 0;
}
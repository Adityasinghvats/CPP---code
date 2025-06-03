#include<bits/stdc++.h>
//adjacency map for a weifhted graph
using namespace std;
vector<unordered_map<int,int>> undirected_unweighted_graph;
int v;//no of vertices
void add_edge(int src, int dest,int wt, bool bi_dire = true){
    undirected_unweighted_graph[src][dest] = wt;
    if(bi_dire){
        undirected_unweighted_graph[dest][src] = wt;
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
    undirected_unweighted_graph.resize(v, unordered_map<int,int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d, wt;
        cin>>s>>d>>wt;
        add_edge(s,d,wt);
    }
    display();
    return 0;
}
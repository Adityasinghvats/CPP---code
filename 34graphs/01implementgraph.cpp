#include<bits/stdc++.h>
//adjacency list implementation
using namespace std;
vector<list<int>> undirected_unweighted_graph;
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
    display();
    return 0;
}
/*
Graph implementations
- Edgelist type (clean but noob)
 (class for node, class for edge with source, destination, direction, weight)
 (class of graph with vector of nodes and edges)

- Adjacency list (most optimal)
 (using adjancency matrix or array of linked list)
 (array contains information about neighbours of that vetices which is a Linked List)
 (neighbour is one which has direct connection)
 (for directed graph only make edges from source to destination, not in reverse)
 (for weighted grphs store a pair of (vertex, weight) in the linkedlist)

- Adjacency map ( useful for operations where we need to find the immediate neighbour of our vertex)
 can find in o(1) , search in graphs
 (We represent graphs as array of unordered_map)
 (hasmap stores key value pair of (vertex, weight))

- Adjancency matrix
 (if bidirectional graph , pair is having value 1 twice)
 (id direction graph from i-->j only pair (i, j) has value 1)
 (not space efficient beacuse empty cells are present)

- Dense vs sparse graph
- Incidence matrix (better for space in case of sparse graph)
*/
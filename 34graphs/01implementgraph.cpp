#include<bits/stdc++.h>
using namespace std;
int main(){
    return 0;
}
/*
Graph implementations
- Edgelist type (clean but noob)
 (class for node, class for edge with source, destination, direction, weight)
 (class of graph with vector of nodes and edges)

- Adjacency list
 (using adjancency matrix or array of linked list)
 (array contains information about neighbours of that vetices which is a Linked List)
 (neighbour is one which has direct connection)
 (for directed graph only make edges from source to destination, not in reverse)
 (for weighted grphs store a pair of (vertex, weight) in the linkedlist)

- Adjacency map ( useful for operations where we need to find the immediate neighbour of our vertex)
 can find in o(1) , search in graphs
 (We represent graphs as array of unordered_map)
 (hasmap stores key value pair of (vertex, weight))
*/
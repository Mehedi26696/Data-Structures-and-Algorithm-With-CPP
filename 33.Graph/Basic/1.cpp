
// Graph using map

// adjacency list representation of graph using map

#include <bits/stdc++.h>
using namespace std;

class Graph
{   
    public:
    map<int, list<int>> adj;

    void addEdge(int u, int v , bool direction)
    {
        // direction = 0 means undirected 
        // direction = 1 means directed
        adj[u].push_back(v);

        if(direction == 0){
            adj[v].push_back(u);
        }
         
    }

    void print(){
        for(auto i : adj){
            cout << i.first << " -> ";
            for(auto j : i.second){
                cout << j << " ";
            }
            cout << endl;
        }
    }

};

int main(){

    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;

    cout<<"Enter the number of edges: "<<endl;

    cin>>m;

    Graph g;

    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    // printing the graph

    g.print();
    return 0;
}


// Input:

// Sketch of graph:

// 0 -  1
// |   |  \  
// 4 - 3 - 2  

// Enter the number of nodes: 
// 5
// Enter the number of edges: 
// 6
// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4

// Output:

// 0 -> 1 4 
// 1 -> 0 2 3
// 2 -> 1 3
// 3 -> 2 1 4
// 4 -> 3 0

// Time complexity: O(V + E)    where V is the number of vertices and E is the number of edges in the graph.
// Space complexity: O(V + E)    where V is the number of vertices and E is the number of edges in the graph.

// How time complexity is O(V + E)?
// The time complexity of the addEdge function is O(1) because we are just pushing the element in the list.
// The time complexity of the print function is O(V + E) because we are iterating over all the vertices and all the edges.
// So, the overall time complexity is O(V + E).
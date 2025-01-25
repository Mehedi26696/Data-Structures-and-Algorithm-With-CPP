
// graph representation using adjacency list using vector

#include <bits/stdc++.h>
using namespace std;

class Graph
{
    public:
    
    // adjacency list representation of graph using vector of vectors

    vector<vector<int>> adj;

    Graph(int n) {
        adj.resize(n);
    }

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
        for(int i = 0; i < adj.size(); i++){
            cout << i << " -> ";
            for(int j = 0; j < adj[i].size(); j++){
                cout << adj[i][j] << " ";
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


    Graph g(n);

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

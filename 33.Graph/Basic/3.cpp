
// graph representation using adjacency matrix

#include <bits/stdc++.h>
using namespace std;

class Graph
{
    public:
    // adjacency matrix representation of graph using vector of vectors

    vector<vector<int>> adj;

    Graph(int n) {
        adj.resize(n, vector<int>(n, 0));
    }

    void addEdge(int u, int v , bool direction)
    {
        // direction = 0 means undirected 
        // direction = 1 means directed
        adj[u][v] = 1;

        if(direction == 0){
            adj[v][u] = 1;
        }

        if(u == v){
            adj[u][v] = 1;
        }
         
    }

    void print(){
        for(int i = 0; i < adj.size(); i++){
          
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
// 0 1 0 0 1 
// 1 0 1 1 0
// 0 1 0 1 0
// 0 1 1 0 1
// 1 0 0 1 0

//BFS

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj(1000);

void addedge(int u,int v,int direction){
    adj[u].push_back(v);
    
    // 0 means undirected
    if(direction == 0){
        adj[v].push_back(u);
    }
}

void print(int n){
    for(int i = 0; i < n; i++){
        cout<<i<<" -> ";

        for(int j = 0; j < adj[i].size(); j++){
            cout<< adj[i][j] <<" ";
        }
        cout<<endl;
    }
}

void bfs(int start) {
    vector<bool> visited(1000, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(auto neighbor : adj[node]) {
            if(!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}


void recbfs(int start, vector<bool> &visited) 
{
   // Base case
    if(visited[start]) return;

    // Print the current node
    cout << start << " ";
    visited[start] = true;

    // For every node of the graph
    for(auto i : adj[start]) {
        recbfs(i, visited);
    }
}

int main(){
    
    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;

    cout<<"Enter the number of edges: "<<endl;
    cin>>m;

    
    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        addedge(u, v, 0);
    }

    // printing the graph

    print(n);

    cout << "BFS: ";
    bfs(0);

    cout << endl;

    cout << "Recursive BFS: ";
    vector<bool> visited(1000, false);
    recbfs(0, visited);


    return 0;

}

// Time Complexity: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
// Space Complexity: O(V), where V is the number of vertices in the graph.

// Example Graph:

 
// 0 - 1 - 2
// |    \  /
// 4 -   3





// Input:
// 5
// 6
// 0 1
// 0 4
// 1 2
// 2 3
// 3 1
// 3 4

// Output:
// 0 -> 1 4
// 1 -> 0 2 3
// 2 -> 1 3
// 3 -> 2 1 4
// 4 -> 0 3
// BFS: 0 1 4 2 3
// Recursive BFS: 0 1 4 2 3



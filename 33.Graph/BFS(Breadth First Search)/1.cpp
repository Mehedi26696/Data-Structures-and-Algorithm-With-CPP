
// BFS (Breadth First Search) is an algorithm for traversing or searching tree or graph data structures. 
//It starts at the tree root (or some arbitrary node of a graph, sometimes referred to as a 'search key'), 
//and explores all of the neighbor nodes at the present depth prior to moving on to the nodes at the next depth level.


#include <bits/stdc++.h>

using namespace std;

map<int,list<int>> adj;

void addedge(int u,int v,int direction){
    adj[u].push_back(v);
    
    // 0 means undirected
    if(direction == 0){
        adj[v].push_back(u);
    }
}

void print(){
    for(auto i : adj){
        cout<<i.first<<" -> ";

        for(auto j: i.second){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}

void bfs(int start) {
    map<int, bool> visited;
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

// use recursion

void recbfs(int start, map<int, bool> &visited) 
{
   // Base case
    if(visited[start]) return;

    // Print the current node
    cout << start << " ";
    visited[start] = true;

    // Recur for all the vertices adjacent to this vertex

    for(auto neighbor : adj[start]) {
        recbfs(neighbor, visited);
    }


}
   



int main(){
    int n;
    cout<<"Enter total Nodes: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter number of edges: "<<endl;
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        addedge(u,v,0);
    }

    print();

    cout<<"BFS Traversal: ";
    bfs(0);

    cout<<endl;

    map<int, bool> visited;

    cout<<"Recursion BFS Traversal: ";

    recbfs(0, visited);

    return 0;
}


// Example Graph:

// 1 -  0
//  \   /
//    2 - 3


// 0 -> 1 2   
// 1 -> 0 2   
// 2 -> 1 0 3 
// 3 -> 2

// BFS Traversal: 0 1 2 3
// Recursion BFS Traversal: 0 1 2 3



// without class
#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &mat, int i, int j)
{
    mat[i][j] = 1;
    mat[j][i] = 1;  // for undirected graph
}

void displayMatrix(vector<vector<int>> &mat)
{
    int V = mat.size();
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    
     int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;

    cout<<"Enter the number of edges: "<<endl;

    cin>>m;

    vector<vector<int>> mat(n, vector<int>(n, 0));

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        addEdge(mat, u, v);
    }

    cout << "Adjacency Matrix Representation" << endl;
    displayMatrix(mat);

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

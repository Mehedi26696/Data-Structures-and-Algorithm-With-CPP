

// Diameter of a Binary Tree
// Optimize approach 

// https://leetcode.com/problems/diameter-of-binary-tree/description/

// The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.
// The length of a path between two nodes is represented by the number of edges between them.

// Approach
// 1. If the tree is empty, return 0
// 2. Otherwise, return the maximum of the following:
//    a. The diameter of the left subtree
//    b. The diameter of the right subtree
//    c. The longest path between two nodes that passes through the root
// 3. The longest path between two nodes that passes through the root is the sum of the heights of the left and right subtrees + 1
// 4. The base case is when the root is NULL, in which case the diameter is 0
// 5. The recursive case is when the root is not NULL, in which case the diameter is the maximum of the left and right subtrees, and the height of the left and right subtrees + 1

 

#include<bits/stdc++.h>
using namespace std;

// Node class to represent each node in the binary tree
class node
{
public:
    int data;    // Data stored in the node
    node *left;  // Pointer to the left child
    node *right; // Pointer to the right child

    // Constructor to initialize the node with data
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build the binary tree

node *buildtree(node *root)
{
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new node(data); // Create a new node with the input data

    // Base case for recursion
    if (data == -1)
    {
        return NULL; // If data is -1, this node is NULL
    }

    // Recursively build the left and right subtrees
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildtree(root->right);

    return root; // Return the root of the subtree
}



// diameter and height in a single function

pair<int, int> diameterHeight(node *root)
{
    // Base case
    if (root == NULL)
    {
         pair<int, int> p = make_pair(0, 0);
        return p; // If the tree is empty, the diameter and height are both 0
    }

    // Recursive case
    // Get the diameter and height of the left subtree
    pair<int, int> left = diameterHeight(root->left);
    // Get the diameter and height of the right subtree
    pair<int, int> right = diameterHeight(root->right);

    // Calculate the height of the current node
    int height = max(left.second, right.second) + 1;

    // Calculate the diameter of the current node
    int diameter = max({left.first, right.first, left.second + right.second});

    return {diameter, height}; // Return the diameter and height of the current node
}

int main()
{
    node *root = NULL; // Pointer to the root node
    root = buildtree(root); // Build the binary tree

    // Get the diameter and height of the binary tree
    pair<int, int> result = diameterHeight(root);

    cout << "The diameter of the binary tree is: " << result.first << endl; // Print the diameter of the binary tree

    return 0;
}

// Time complexity: O(n)
// Space complexity: O(n) for the recursive call stack
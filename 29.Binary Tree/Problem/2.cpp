
// Maximum depth of a binary tree

// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

// depth of a binary tree is the number of nodes along the longest path from the root node down to the farthest leaf node.

//Approach
// 1. If the tree is empty, return 0
// 2. Otherwise, return the maximum depth of the left and right subtrees + 1
// 3. The base case is when the root is NULL, in which case the depth is 0
// 4. The recursive case is when the root is not NULL, in which case the depth is the maximum of the left and right subtrees + 1


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

int maxDepth(node *root)
{
    // Base case
    if (root == NULL)
    {
        return 0;
    }

    // Recursive case
    int leftDepth = maxDepth(root->left);   // Depth of the left subtree
    int rightDepth = maxDepth(root->right); // Depth of the right subtree

    return max(leftDepth, rightDepth) + 1; // Return the maximum depth of the left and right subtrees + 1
}
int main()
{
    
    node *root = NULL;
    root = buildtree(root);
    cout << "The maximum depth of the binary tree is " << maxDepth(root) << endl;
    return 0;
}

// Time complexity: O(n)
// Space complexity: O(n) for the function call stack

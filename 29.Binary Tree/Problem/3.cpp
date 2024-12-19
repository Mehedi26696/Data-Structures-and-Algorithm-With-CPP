
// Diameter of a Binary Tree

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

int height(node *root)
{
    // Base case
    if (root == NULL)
    {
        return 0; // If the tree is empty, the height is 0
    }

    // Recursive case
    // The height of the tree is the maximum of the height of the left and right subtrees + 1
    return max(height(root->left), height(root->right)) + 1;
}

int diameter(node *root)
{
    // Base case
    if (root == NULL)
    {
        return 0; // If the tree is empty, the diameter is 0
    }

    // Recursive case
    // The diameter of the tree is the maximum of the following:
    // 1. The diameter of the left subtree
    // 2. The diameter of the right subtree
    // 3. The longest path between two nodes that passes through the root

    int leftDiameter = diameter(root->left);   // Diameter of the left subtree
    int rightDiameter = diameter(root->right); // Diameter of the right subtree

    // The longest path between two nodes that passes through the root is the sum of the heights of the left and right subtrees + 1

    int leftHeight = height(root->left);   // Height of the left subtree
    int rightHeight = height(root->right); // Height of the right subtree

    int heightThroughRoot = leftHeight + rightHeight; // Height of the tree through the root

    return max(max(leftDiameter, rightDiameter), heightThroughRoot);  
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    cout << "The diameter of the binary tree is " << diameter(root) << endl;
    return 0;
}


// Time Complexity - O(n^2)
// Space Complexity - O(n)
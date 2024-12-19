
// count how many leaf nodes in a binary tree

// Example of a binary tree structure:
//         20
//        /  \
//      10    35
//     / \   /  \
//    5  15 30  42
//       /
//      13



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

void inorder(node *root,int &cnt){
    // Base case
    if(root == NULL){
        return;
    }

    // Recursive case
    inorder(root->left,cnt); // First go to the leftmost node

    // leaf nodes
    if(root->left == NULL && root->right == NULL){
        cnt++;
    }
    inorder(root->right,cnt); // Go to the rightmost node
}

int leafnodes(node *root){
     
    int cnt = 0 ;
    inorder(root,cnt);
    return cnt;

}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    cout << "Number of leaf nodes in the binary tree is: " << leafnodes(root) << endl;

    return 0;
}
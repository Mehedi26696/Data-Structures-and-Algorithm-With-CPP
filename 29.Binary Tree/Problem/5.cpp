
// Balanced Tree

// Balanced Tree is a tree in which the depth of the two subtrees of every node never differ by more than 1.

// https://leetcode.com/problems/balanced-binary-tree/description/

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

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

int height(node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}

bool isBalanced(node* root){
    if(root == NULL){
        return true;
    }

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);
    int lh = height(root->left);
    int rh = height(root->right);

    bool diff = abs(lh-rh)<=1;

    if(left && right && diff){
        return true;
    }
    return false;
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    if(isBalanced(root)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Not a Balanced Tree"<<endl;
    }

    return 0;
}

// Time Complexity: O(N^2)
// Space Complexity: O(N)
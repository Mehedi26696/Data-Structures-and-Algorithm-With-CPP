
// sum tree

// https://www.geeksforgeeks.org/problems/sum-tree/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// sum tree means that the value of the root node is equal to the sum of the values of the left and right subtrees

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

int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return root->data + sum(root->left) + sum(root->right);
}

bool isSumTree(node *root)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }
    
    bool left = isSumTree(root->left);
    bool right = isSumTree(root->right);

    int leftsum = sum(root->left);
    int rightsum = sum(root->right);

    bool value = root->data == leftsum + rightsum;

    return left && right && value;

}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    if (isSumTree(root))
    {
        cout << "The tree is a sum tree" << endl;
    }
    else
    {
        cout << "The tree is not a sum tree" << endl;
    }
    return 0;
}
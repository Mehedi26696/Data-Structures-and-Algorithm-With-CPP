

// Identical Trees

// https://leetcode.com/problems/same-tree/description/


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

bool isSameTree(node *p, node *q)
{
    if (p == NULL && q == NULL)
    {
        return true;
    }
    if (p == NULL && q != NULL)
    {
        return false;
    }
    if (p != NULL && q == NULL)
    {
        return false;
    }
   
    bool left = isSameTree(p->left, q->left);
    bool right = isSameTree(p->right, q->right);

    bool value = p->data == q->data;

    return left && right && value;

}

int main()
{
    node *root1 = NULL;
    root1 = buildtree(root1);

    node *root2 = NULL;
    root2 = buildtree(root2);

    if (isSameTree(root1, root2))
    {
        cout << "Both trees are identical" << endl;
    }
    else
    {
        cout << "Both trees are not identical" << endl;
    }

    return 0;
}


// Time Complexity: O(N)
// Space Complexity: O(N)
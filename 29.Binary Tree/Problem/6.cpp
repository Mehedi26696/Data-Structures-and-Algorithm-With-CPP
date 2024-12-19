

// Balanced Tree

// Balanced Tree is a tree in which the depth of the two subtrees of every node never differ by more than 1.

// https://leetcode.com/problems/balanced-binary-tree/description/

// optimized approach

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

pair<int,bool> isBalanced(node* root){
    if(root == NULL){
        pair<int,bool> p = make_pair(0,true);
        return p;
    }

    pair<int,bool> left = isBalanced(root->left);
    pair<int,bool> right = isBalanced(root->right);

    bool leftans = left.second;
    bool rightans = right.second;
    bool diff = abs(left.first - right.first) <= 1;

    pair<int,bool> ans;

    ans.first = max(left.first,right.first)+1;

    if(diff && leftans && rightans){
        ans.second = true;
    }else{
        ans.second = false;
    }

    return ans;

}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    pair<int,bool> ans = isBalanced(root);
    if(ans.second){
        cout<<"Balanced Tree"<<endl;
    }else{
        cout<<"Not a Balanced Tree"<<endl;
    }
    return 0;
}


// Time Complexity: O(N)
// Space Complexity: O(N)
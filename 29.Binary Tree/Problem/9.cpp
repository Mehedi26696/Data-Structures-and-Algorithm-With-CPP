
// zig zag traversal of a binary tree

// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

// approach: level order traversal and reverse the even levels

#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// build the tree

TreeNode *buildtree(TreeNode *root)
{
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new TreeNode(data); // Create a new node with the input data

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

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
    vector<vector<int>> result;

    if (root == NULL)
    {
        return result;
    }

    queue<TreeNode *> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty())
    {
        int size = q.size();
        vector<int> ans(size);

        for (int i = 0; i < size; i++)
        {
            TreeNode *frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;

            ans[index] = frontNode->val;

            if (frontNode->left)
            {
                q.push(frontNode->left);
            }

            if (frontNode->right)
            {
                q.push(frontNode->right);
            }
        }

        leftToRight = !leftToRight;

        result.push_back(ans);
    }
    return result;
}

int main()
{
    TreeNode *root = NULL;
    root = buildtree(root);
    vector<vector<int>> result = zigzagLevelOrder(root);

    for (auto x : result)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}

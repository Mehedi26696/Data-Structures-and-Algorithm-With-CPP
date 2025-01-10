

// Two sum in BST (Binary Search Tree)

//https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/




#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node * insertIntoBST(Node* root, int data) {
    if(root == NULL) {
        return new Node(data);
    }
    if(data < root->data) {
        root->left = insertIntoBST(root->left, data);
    } else {
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}

void inorder(Node * root, vector<int> &inorderval) {
    if (root == NULL) {
        return;
    }

    inorder(root->left, inorderval);
    inorderval.push_back(root->data);
    inorder(root->right, inorderval);
}

bool findTwosum(Node* root, int target) {

    vector<int> inorderval;

    inorder(root, inorderval);

    int left = 0;
    int right = inorderval.size() - 1;

    while (left < right) {
        if (inorderval[left] + inorderval[right] == target) {
            return true;
        } else if (inorderval[left] + inorderval[right] < target) {
            left++;
        } else {
            right--;
        }
    }

    return false;


     
}

 

int main() {
    Node* root = NULL;
    int n;
    cout << "Enter the number of nodes: ";

    cin >> n;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        root = insertIntoBST(root, data);
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    cout << findTwosum(root, target)<<endl;


    return 0;
}
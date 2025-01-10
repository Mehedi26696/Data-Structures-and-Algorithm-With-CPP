
// LCA of a BST (Binary Search Tree) 
// LCA of a BST (Binary Search Tree) is the lowest common ancestor of two nodes if the nodes exist in the tree.



#include <iostream>
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

Node* LCA(Node* root, int n1, int n2) {
    if (root == NULL) {
        return NULL;
    }

    if (root->data > n1 && root->data > n2) {
        return LCA(root->left, n1, n2);
    }

    if (root->data < n1 && root->data < n2) {
        return LCA(root->right, n1, n2);
    }

    return root;
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

    int n1, n2;
    cout << "Enter the two nodes: ";
    cin >> n1 >> n2;


    Node* lca = LCA(root, n1, n2);
    cout << lca->data << endl;

    return 0;
}



 
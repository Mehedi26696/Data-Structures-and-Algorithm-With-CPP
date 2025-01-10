// Flattent a binary search tree to a linked list

//https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/0

#include <iostream>
 
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
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

Node * flatten(Node * root) {
    vector<int> inorderval;

    inorder(root, inorderval);

    Node * head = new Node(inorderval[0]);
    Node * temp = head;

    for (int i = 1; i < inorderval.size(); i++) {
        temp->left = NULL;
        temp->right = new Node(inorderval[i]);
        temp = temp->right;
    }

    temp->left = NULL;
    temp->right = NULL;

    return head;
}

 


int main(){
    Node* root = NULL;
    
    int n;

    cout<<"Enter the no of the nodes: ";

    cin>>n;

    for(int i = 0; i < n; i++){
        int n;
        cin>>n;
        root = insertIntoBST(root, n);
    }

    Node * head = flatten(root);

    while (head != NULL) {
        cout << head->data << " ";
        head = head->right;
    }
    

    return 0;

}


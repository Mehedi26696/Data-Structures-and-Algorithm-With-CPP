// Validate a BST

// https://leetcode.com/problems/validate-binary-search-tree/

//Example:

//    10
//   /  \
//  5    15
// / \   /  \
//2   6 13   22

//Output: True

//     10
//    /  \
//   5    15
//  / \   /  \
// 2   4 12   22

//Output: False

// approach -1  : check root->left < root < root->right



#include <iostream>

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

void Inorder(Node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

bool isBST(Node* root, Node* min = NULL, Node* max = NULL){
    if(root == NULL){
        return true;
    }
    if(min != NULL && root->data <= min->data){
        return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }
    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);

    return leftValid && rightValid;
}



int main(){
    Node* root = NULL;
    
    for(int i = 0; i < 7; i++){
        int n;
        cin>>n;
        root = insertIntoBST(root, n);
    }
    

    cout<<"Inorder Traversal of BST: ";
    Inorder(root);

    cout<<endl;

    if(isBST(root)){
        cout<<"The given tree is a BST"<<endl;
    } else {
        cout<<"The given tree is not a BST"<<endl;
    }




    return 0;



}

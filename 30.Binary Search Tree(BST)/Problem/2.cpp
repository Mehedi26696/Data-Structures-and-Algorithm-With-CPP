
// Validate a BST


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

// approach -2  :  Inorder traversal of BST should be in increasing order



#include <iostream>
#include <climits>

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

bool inordersorted(Node* root, int &prev){
    if(root == NULL){
        return true;
    }
    if(!inordersorted(root->left, prev)){
        return false;
    }
    if(root->data <= prev){
        return false;
    }
    prev = root->data;
    return inordersorted(root->right, prev);
}

bool isBST(Node* root){
    int prev = INT_MIN;
    return inordersorted(root, prev);
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

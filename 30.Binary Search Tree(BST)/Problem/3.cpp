
// K-th smallest element in a BST

//https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/

// Example: 

//        5
//       / \
//      4   8
//     /   / \
//    2   6   10
//     \   \    
//      3   7






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

int Inorder(Node* root,int &c, int k){
    if(root == NULL){
        return -1;
    }
    int left = Inorder(root->left, c, k);

    if(left != -1){
        return left;
    }
    c++;
    if(c == k){
        return root->data;
    }
    return Inorder(root->right, c, k);  
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

    int k;

    cout<<"Enter the value of k: ";
    cin>>k;
    
     
    int c = 0;
    cout<<Inorder(root, c, k)<<endl;

    return 0;

}


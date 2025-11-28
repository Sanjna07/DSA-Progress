#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

//searching in BST
Node* searchInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root -> data == key){
        return root;
    }
    else if(key < root -> data){
        return searchInBST(root -> left, key);
    }
    else{
        return searchInBST(root -> right, key);
    }
};

//insertion in BST
Node* insertInBST(Node* root, int key){
    if(root == NULL){
        return new Node(key);
    }
    if(key < root -> data){
        root -> left = insertInBST(root -> left, key);
    }
    else{
        root -> right = insertInBST(root -> right, key);
    }
    return root;
};

//deletion in BST
Node* deleteInBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key < root -> data){
        root -> left = deleteInBST(root -> left, key);
    }
    else if(key > root -> data){
        root -> right = deleteInBST(root -> right, key);
    }
    else{
        //node found
        //case 1: no child
        if(root -> left == NULL && root -> right == NULL){
            delete root;
            return NULL;
        }
        //case 2: one child
        else if(root -> left == NULL){
            Node* temp = root -> right;
            delete root;
            return temp;
        }
        else if(root -> right == NULL){
            Node* temp = root -> left;
            delete root;
            return temp;
        }
        //case 3: two children
        else{
            Node* succParent = root;
            Node* succ = root -> right;
            while(succ -> left != NULL){
                succParent = succ;
                succ = succ -> left;
            }
            //copy successor value to root
            root -> data = succ -> data;
            //delete successor
            if(succParent != root){
                succParent -> left = deleteInBST(succParent -> left, succ -> data);
            }
            else{
                succParent -> right = deleteInBST(succParent -> right, succ -> data);
            }
        }
    }
    return root;
}

int main(){
    Node* root = new Node(5);
    root -> left = new Node(3);
    root -> right = new Node(7);
    root -> left -> left = new Node(2);
    root -> left -> right = new Node(4);
    root -> right -> right = new Node(8);


    int key = 4;
    Node* result = searchInBST(root, key);
    cout << "Searching " << key << " in BST: ";
    if(result != NULL){ 
        cout << "Found - " << result->data << endl;
    } else {
        cout << "Not Found" << endl;
    }

    key = 6;
    cout << "Deleting " << key << " in BST." << endl;
    root = deleteInBST(root, key);
    cout << "Inorder Traversal after deletion: ";
    vector<int> inorder;
    function<void(Node*)> inorderTraversal = [&](Node* node) {
        if (node == NULL) return;
        inorderTraversal(node->left);
        inorder.push_back(node->data);
        inorderTraversal(node->right);
    };
    inorderTraversal(root);
    for(int val : inorder){
        cout << val << " ";
    }
   
    return 0;
}
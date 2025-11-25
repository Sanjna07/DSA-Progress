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
   
    return 0;
}
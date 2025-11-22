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

//pre order traversal

void preOrder(Node* node){
    if(node == NULL){
        return;
    }
    cout<<node -> data<< " ";
    preOrder(node -> left);
    preOrder(node -> right);
};

// in order traversal
void inOrder(Node* node){
    if(node == NULL){
        return;
    }
    inOrder(node -> left);
    cout<<node->data<<" ";
    inOrder(node -> right);
}

//post Order traversal
void postOrder(Node* node){
    if(node == NULL){
        return;
    }
    postOrder(node -> left);
    postOrder(node -> right);
    cout<<node -> data<<" ";
}

int main(){

    struct Node* root = new Node(1);
    root -> left = new Node(2); 
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right = new Node(7);

    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);

    return 0;
}
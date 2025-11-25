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

// pre order using stack
vector<int> preOrderIterative(Node* root){
    vector<int> preorder;
    if(root == NULL){
        return preorder;
    }
    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.push_back(root -> data);

        // push right first so that left is processed first
        if(root -> right != NULL){
            st.push(root -> right);
        }
        if(root -> left != NULL){
            st.push(root -> left);
        }
    }
    return preorder;
}

// in order using stack
vector<int> inOrderIterative(Node* root){
    vector<int> inorder;
    stack<Node*> st;
    Node* curr = root;

    while(curr != NULL || !st.empty()){
        // reach the left most node of the curr node
        while(curr != NULL){
            st.push(curr);
            curr = curr -> left;
        }
        // curr must be NULL at this point
        curr = st.top();
        st.pop();
        inorder.push_back(curr -> data);

        // visit the right subtree
        curr = curr -> right;
    }
    return inorder;
}

// post order using stack
vector<int> postOrderIterative(Node* root){
    vector<int> postorder;
    if(root == NULL){
        return postorder;
    }
    stack<Node*> st1, st2;
    st1.push(root);

    while(!st1.empty()){
        root = st1.top();
        st1.pop();
        st2.push(root);

        if(root -> left != NULL){
            st1.push(root -> left);
        }
        if(root -> right != NULL){
            st1.push(root -> right);
        }
    }
    while(!st2.empty()){
        postorder.push_back(st2.top() -> data);
        st2.pop();
    }
    return postorder;
}

int main(){
    /*
                1
               / \
              2   3
             / \  /
            4   5 6
                   \
                    7
                    \
                     8
    */

    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    root -> right -> right -> right = new Node(7);
    root -> right -> right -> right -> right = new Node(8);

    // Preorder Traversal
    vector<int> pre = preOrderIterative(root);
    cout << "Preorder Traversal: ";
    for(int val : pre){
        cout << val << " ";
    }
    cout << endl;

    // Inorder Traversal
    vector<int> in = inOrderIterative(root);
    cout << "Inorder Traversal: ";
    for(int val : in){
        cout << val << " ";
    }
    cout << endl;

    // Postorder Traversal
    vector<int> post = postOrderIterative(root);
    cout << "Postorder Traversal: ";
    for(int val : post){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
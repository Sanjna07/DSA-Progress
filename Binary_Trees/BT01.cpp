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

//max height of binary tree

int maxHeight(Node* root){
    if(root == NULL) return 0;
    int lh = maxHeight(root -> left);
    int rh = maxHeight(root -> right);
    return 1 + max(lh , rh);

}


//Balanced binary tree
bool isBalanced(Node* root){
    if(root == NULL) return 0;

    int lh = maxHeight(root -> left);
    if(lh == -1) return -1;
    int rh = maxHeight(root -> right);
    if(rh == -1) return -1;

    if(abs(lh - rh) > 1) return -1;
    return 1 + max(lh , rh);
    
}

// Diameter of binary tree
 int diameterBT(Node* root){
    int diameter = 0;
    height(root , diameter);
    return diameter;
 };

 int height(Node* node , int &diameter){
    if(node == NULL) return 0;

    int lh = height(node -> left , diameter);
    int rh = height(node -> right , diameter);

    diameter = max(diameter , lh + rh);

    return 1 + max(lh , rh);
 }


 // max path sum in binary tree
    int maxPathSum(Node* root){
        int maxi = INT_MIN;
        height(root , maxi);
        return maxi;
    }
    int height(Node* node , int &maxi){
        if(node == NULL) return 0;

        int lh = max(0,(node -> left , maxi));
        int rh = max(0,(node -> right , maxi));

        maxi = max(maxi , lh + rh + node -> data);
        return max(lh , rh) + node -> data;

    }


int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> left -> left = new Node(5);

    cout << "max height of the binary tree is:" << maxHeight(root);
    cout << endl;

    if(isBalanced(root) != -1){
        cout << "The binary tree is balanced";
    }
    else{
        cout << "The binary tree is not balanced";
    }

    cout << endl;
    cout << "Diameter of binary tree is: " << diameterBT(root);

    cout << endl;
    cout << "Max path sum in binary tree is: " << maxPathSum(root);
    return 0;
}
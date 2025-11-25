#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertatHead(Node* &head , int val){
    Node* newNode = new Node(val);
    newNode -> next = head;
    head = newNode;

};

void insertaPos(Node* &head, int val, int pos) {
    Node* newNode = new Node(val);

    // CASE 1: insert at head
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // CASE 2: insert at any other position
    Node* temp = head;
    int count = 1;

    // move temp to node before the desired position
    while (temp != nullptr && count < pos) {
        temp = temp->next;
        count++;
    }

    // if pos is out of range
    if (temp == nullptr) {
        cout << "Position out of range!" << endl;
        delete newNode;
        return;
    }

    // Insert node
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteathead(Node* &head){
   if(head == NULL) return;

   Node* temp = head;
   head = head -> next;
   delete temp;
}

int main(){
    Node* head = NULL;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i<n; i++){
        int val;
        cout << "Enter value " << i+1 << ": ";
        cin >> val;
        insertatHead(head , val);
    }

    //insertaPos(head , 100 , 2);
    
    deleteathead(head);

    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;
    }
    
    return 0;
}
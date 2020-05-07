// C++ program to check children sum property 
#include <bits/stdc++.h> 
using namespace std; 
  
// A binary tree node 
struct Node { 
    int data; 
    Node *left, *right; 
}; 
  
// Utility function to allocate memory for a new node 
Node* newNode(int data) 
{ 
    Node* node = new (Node); 
    node->data = data; 
    node->left = node->right = NULL; 
    return (node); 
} 
  
// Function to check if the tree holds 
// children sum property 
bool CheckChildrenSum(Node* root) 
{ 
    queue<Node*> q; 
  
    // Push the root node 
    q.push(root); 
  
    while (!q.empty()) { 
        Node* temp = q.front(); 
        q.pop(); 
  
        // If the current node has both left and right children 
        if (temp->left && temp->right) { 
            // If the current node is not equal to 
            // the sum of its left and right children 
            // return false 
            if (temp->data != temp->left->data + temp->right->data) 
                return false; 
  
            q.push(temp->left); 
            q.push(temp->right); 
        } 
  
        // If the current node has right child 
        else if (!temp->left && temp->right) { 
            // If the current node is not equal to 
            // its right child return false 
            if (temp->data != temp->right->data) 
                return false; 
  
            q.push(temp->right); 
        } 
  
        // If the current node has left child 
        else if (!temp->right && temp->left) { 
            // If the current node is not equal to 
            // its left child return false 
            if (temp->data != temp->left->data) 
                return false; 
  
            q.push(temp->left); 
        } 
    } 
  
    // If the given tree has children 
    // sum property return true 
    return true; 
} 
  
// Driver code 
int main() 
{ 
    Node* root = newNode(10); 
    root->left = newNode(8); 
    root->right = newNode(2); 
    root->left->left = newNode(3); 
    root->left->right = newNode(5); 
    root->right->right = newNode(2); 
  
    if (CheckChildrenSum(root)) 
        printf("Yes"); 
    else
        printf("No"); 
  
    return 0; 
} 
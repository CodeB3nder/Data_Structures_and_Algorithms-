# include <iostream>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int x){
        key = x;
        left = right = NULL ;
    }
};
bool search_rec(Node* root, int x){
    if(root == NULL)
        return false;
    else if(root->key == x)
        return true;
    else if(root->key>x)
        return search_rec(root->left, x);
    else
        return search_rec(root->right, x);

}
bool search_iter(Node* root, int x){
    while(root!=NULL){
        if(root->key == x)
            return true;
        else if(root-> key > x)
            root = root ->left;
        else
            root = root-> right;
    }
    return true;
}

Node * insert_rec(Node* root, int x){
    if(root==NULL)
        return new Node(x);
    if(x < root->key)
        root->left = insert_rec(root->left, x);
    if(x > root->key)
        root->right = insert_rec(root->right, x);
    
    return root;

}
Node *delete_rec(Node* root, int key){
    if(root == NULL) return root;

    if(key < root->key) root->left = delete_rec(root->left, key);

    else if(key > root->key) root->right = delete_rec(root->right, key);


}
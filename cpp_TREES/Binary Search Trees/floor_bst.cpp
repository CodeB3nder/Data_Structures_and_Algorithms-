# include <istream>
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

Node* floor_bst(Node* root, int x){
    Node* res = NULL; 
    while(root!=NULL){
        if(root->key == x)
            return root;
        else if(root->key > x)
            root = root->left;
        else{
            res = root;
            root = root->right;
        }
    }
    return res;
}
Node* ceil_bst(Node* root, int x){
     Node* res = NULL;
     while(root!=NULL){
        if(root->key == x)
            return root;
        else if(root->key < x)
            root = root->right;
        else {
            res = root;
            root = root->left;
        }

     }
}
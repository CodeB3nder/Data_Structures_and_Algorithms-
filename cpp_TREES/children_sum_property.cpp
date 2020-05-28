# include "creation_of_tree.cpp"

bool f(node *root)
{    
    if(root == NULL)    
        return true;
    else 
    if(root->left == NULL || root->right == NULL  )
        return true;
    int sum = 0;
    if(root->left!=NULL) 
        sum += root->left->key;
    
    if(root->right!=NULL) 
        sum += root->right->key;
    return (root->key == sum && f(root->left) && f(root->right));
}
int main(){
    node* root = create();
    cout << f(root);
}
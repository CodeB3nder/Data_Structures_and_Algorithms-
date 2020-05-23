# include "creation_of_tree.cpp"

int height(node * root)
{
    if(root==NULL)
        return 0;
    else
        return max(height(root->left), height(root->right))+1;
    
}

int main(){
    node* root = create();
    cout << height(root);
}
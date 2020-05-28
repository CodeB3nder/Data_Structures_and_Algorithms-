# include "creation_of_tree.cpp"
# include "height.cpp"

bool f(node* root){
    if(root==NULL)
        return true;
    int lh = height(root->left);
    int rh = height(root->right);

    return (abs(rh-lh) && f(root->left) && f(root->right));
}

int main(){
    node* root = create();
    cout << f(root);
}
# include "creation_of_tree.cpp"

int f(node* root){
    if(root == NULL)
        return 0;
    int lh = f(root->left);
    if(lh==-1) return -1;
    int rh = f(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    return (max(lh,rh)+1);
}
int main(){
    node* root = create();
    cout << f(root);
}
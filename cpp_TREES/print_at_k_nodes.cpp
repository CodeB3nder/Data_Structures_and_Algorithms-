# include "creation_of_tree.cpp"
void f(node * root, int k)
{   
    if(root==NULL)
        return;
    if(k==0)
        cout << root->key << " ";
    else
    {
        f(root->left, k-1);
        f(root->right, k-1);
    }
    
}
int main(){
    cout << "Enter k: ";
    int k; cin>>k;
    node* root = create();
    f(root, k);
}

# include "creation_of_tree.cpp"
int preIndex = 0;
node * ctree(int in[], int pre[], int is, int ie)
{
    if(is > ie)
        return NULL;
    node* root = new node(pre[preIndex++]);
    int inIndex;
    for(int i=is; i<=ie; i++)
    {
        if(in[i] == root->key){
            inIndex = i;
            break;
        }
    }
    root->left = ctree(in, pre, is, inIndex-1);
    root->right = ctree(in, pre, inIndex+1, ie);
    return root;
}

int main(){
    int n; cin>>n;
    int pre[n];
    int in[n];
    for(int i=0; i<n; i++)
        cin >> pre[i];
    for(int i=0; i<n; i++)
        cin >>  in[i];
    node * root = ctree(in, pre, 0, n-1);
    inOrder(root);
}
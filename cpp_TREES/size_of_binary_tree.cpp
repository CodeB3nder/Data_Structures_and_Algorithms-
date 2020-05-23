/* using loop in the queue */
# include "creation_of_tree.cpp"

int get_size(node* root){
    if(root==NULL)
        return 0;
    else
    {
        int x = get_size(root->left);
        int y = get_size(root->right);
        return x+y+1;
    }
        
}   
int main(){
    node* root = create();
    cout << get_size(root);
}
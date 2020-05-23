/* using loop in the queue */
# include "creation_of_tree.cpp"
# include <cstdlib>
int max(int a, int b){
    if(a>b) return a;
    else
        return b;
    
}
int get_max(node* root){
    if(root==NULL)
        return -1;
    else
        return max(root->key, max(get_max(root->left), get_max(root->right)));
}
int main(){
    node* root = create();
    cout << get_max(root);
}
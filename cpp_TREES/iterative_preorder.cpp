# include "creation_of_tree.cpp"
# include <stack>
void printPreorder(node* root){
    if(root == NULL)
        return ;
    stack<node*> s;
    s.push(root);

    while(!s.empty()){

        node * curr = s.top();
        cout << curr->key << " ";
        s.pop();
        if(curr->right != NULL)
            s.push(curr->right);
        if(curr->left != NULL)
            s.push(curr->left);
    }    
}
int main(){
    node* root = create();
    printPreorder(root);
}
# include "creation_of_tree.cpp"
node* mergeTrees(node* t1, node* t2) {
    if(t1 == NULL) // Left node doesn't exists
        return t2; // The node is returned to its parent left
    if(t2 == NULL)
        return t1;
    t1->key += t2->key;
    
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    
    return t1;
}

int main(){
    node * t1 = create();
    node * t2 = create();

    node* res = mergeTrees(t1, t2);
}
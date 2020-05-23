# include "creation_of_tree.cpp"

void level_order_traversal(node* p){
    queue<node*> q;
    cout << p->key << " ";
    q.push(p);
    while(!q.empty()){
        p = q.front();
        q.pop();
        if(p->left != NULL)
        {
            cout << p->left->key << " ";
            q.push(p->left);
        }
        if(p->right != NULL)
        {
            cout << p->right->key << " ";
            q.push(p->right);
        }
        cout << endl;
    }
}

int main(){
    node* root = create();
    level_order_traversal(root);
}
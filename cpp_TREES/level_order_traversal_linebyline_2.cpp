/* using loop in the queue */
# include "creation_of_tree.cpp"

void f(node* p){
    queue<node *> q;
    q.push(p);
    while(q.empty()==false){
        int count = q.size();
        for(int i=0; i<count; i++)
        {
            node* curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        cout << endl;
    }
}
int main(){
    node* root = create();
    f(root);
}
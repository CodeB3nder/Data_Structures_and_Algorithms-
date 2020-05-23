/* using loop in the queue */
# include "creation_of_tree.cpp"

void f(node* p,int k){
    queue<node *> q;
    q.push(p);
    while(q.empty()==false){
        int count = q.size();
        for(int i=0; i<count; i++)
        {
            node* curr = q.front();
            q.pop();
            if(k==0)
                cout << curr->key << " ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        k--;
    }
}
int main(){
    int k;
    cin >> k;
    node* root = create();
    f(root, k);
}
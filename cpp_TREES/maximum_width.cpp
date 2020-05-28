/* using loop in the queue */
# include "creation_of_tree.cpp"

int f(node* p){
    queue<node *> q;
    int max_ = -100;
    q.push(p);
    while(q.empty()==false){
        int count = q.size();
        if(count > max_)
            max_ = count;
        for(int i=0; i<count; i++)
        {
            node* curr = q.front();
            q.pop();
            //cout << curr->key << " ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        //cout << endl;
    }
    return max_;
}
int main(){
    node* root = create();
    cout << f(root);
}
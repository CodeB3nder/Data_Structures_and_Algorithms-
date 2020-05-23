/* using null marker*/
# include "creation_of_tree.cpp"

void f(node* p){
    queue<node* > q;
    q.push(p);
    q.push(NULL);
    //q will contain atleast one null
    while (q.size()>1)
    {
        node* curr = q.front();
        q.pop();
        if(curr==NULL){
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << curr->key << " "; 
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}
int main(){
    node* root = create();
    f(root);
}
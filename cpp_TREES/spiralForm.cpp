// Using level order traversal

# include "creation_of_tree.cpp"
# include <stack>
void f(node* p){
    queue<node *> q;
    stack<node* > s;
    q.push(p);
    bool reverse = false; // Initally printing the right way
    while(q.empty()==false){
        int count = q.size();
        for(int i=0; i<count; i++)
        {   
            node* curr = q.front();
            q.pop();
            if(reverse)
                s.push(curr);
            else
                cout << curr->key << " ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        if(reverse){
            while(!s.empty())
            {
                cout << s.top()->key << " ";
                s.pop();
            }
        }
        reverse = !reverse;
        
        cout << endl;
    }
}
int main(){
    node* root = create();
    f(root);
}
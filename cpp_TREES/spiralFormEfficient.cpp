# include "creation_of_tree.cpp"
# include <stack>

void spiralFormEfficient(node * root)
{
    stack<node*> s1;
    stack<node*> s2;

    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            node* curr = s1.top();
            cout << curr->key << " ";
            s1.pop();
            if(curr->left != NULL)
                s2.push(curr->left);
            if(curr->right != NULL)
                s2.push(curr->right);
        }
        while (!s2.empty()){
            node* curr = s2.top();
            cout << curr->key << " ";
            s2.pop();
            if(curr->right != NULL)
                s1.push(curr->right);
            if(curr->left != NULL)
                s1.push(curr->left);
        }
    }    
}

int main(){
    node* root = create();
    spiralFormEfficient(root);
}
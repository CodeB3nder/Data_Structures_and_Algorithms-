# include<iostream>
# include<queue>

using namespace std;

struct node{
    int key;
    node *left;
    node *right;

    node(int k)
    {
        key = k;
        left  = right = NULL;
    }
};

node* create(){
    node *root = NULL;
    node *p, *t;
    int x;
    queue<node *> q;
    cout << "Enter root value: ";
    cin >> x;

    root = new node(x);
    q.push(root);
    while(q.empty()==false){
        p=q.front();
        q.pop();
        cout << "Enter left child of " << p->key << " :";
        cin >> x;
        if(x!=-1)
        {
            t = new node(x);
            p->left = t;
            q.push(t);
        }
        cout << "Enter right child of " << p->key << " :";
        cin >> x;
        if(x!=-1)
        {
            t = new node(x);
            p->right = t;
            q.push(t);
        }

    }
    return root;
}

void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        cout << root -> key << " ";
        inOrder(root->right);
    }
}
// int main(){
//     struct node* root = create();
//     inOrder(root);
// }
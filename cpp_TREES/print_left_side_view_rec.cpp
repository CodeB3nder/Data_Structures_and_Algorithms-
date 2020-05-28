/* using loop in the queue */
# include "creation_of_tree.cpp"
int maxLevel = 0; 
void f(node* p, int currLevel = 1){
    if(currLevel > maxLevel){
        cout << p ->key << " ";
        maxLevel = currLevel;
    }
    f(p->left, currLevel+1);
    f(p->right, currLevel+1);
}

int main(){
    node* root = create();
    f(root);
}
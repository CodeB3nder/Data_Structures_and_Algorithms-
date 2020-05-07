bool isBal(node * root) // O(n^2)
{   
    if(root==NULL) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh)<=1 && isBal(root->left) && isBal(root->right));
}
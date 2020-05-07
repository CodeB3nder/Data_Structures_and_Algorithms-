
bool isIdentical(node *r1, node *r2)
{
    //Your Code here
    if(r1 == NULL && r2==NULL)
        return true;
    if(r1 == NULL||r2 == NULL)
        return false;
    
    return (r1->key==r2->key && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right));
}
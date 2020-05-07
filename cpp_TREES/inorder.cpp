void Inorder(struct node *p)
{
    if (p)
    {
        Inorder(p->left);
        cout << p->key << " ";
        Inorder(p->right);
    }
}
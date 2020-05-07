void Preorder(struct node *p)
{
    if (p)
    {
        cout << p->key << " ";
        Preorder(p->left);
        Preorder(p->right);
    }
}
void Postorder(struct node *p)
{
    if (p)
    {
        Postorder(p->left);
        Postorder(p->right);
        cout << p->key << " ";
    }
}
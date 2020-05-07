int count_nodes(struct node *p) // size
{
    int x, y;
    if (p != NULL)
    {
        x = count_nodes(p->left);
        y = count_nodes(p->right);
        return x + y + 1;
    }
    else
        return 0;
}
int count_nodes_degree_2(struct node *p)
{
    int x, y;
    if (p != NULL)
    {
        x = count_nodes(p->left);
        y = count_nodes(p->right);
        if (p->left != NULL && p->right != NULL)
            return x + y + 1;
        else
            return x + y;
    }
    else
        return 0;
}
void printNodesatDistancek(node *root, int k)
{
    if (root == NULL)
        return;
    if (k == 0)
        cout << root->key << " ";
    else
    {
        printNodesatDistancek(root->left, k-1);
        printNodesatDistancek(root->right, k-1);
    }
}

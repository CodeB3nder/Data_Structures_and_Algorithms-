void convert(node* head, treenode* &root)
{
    queue<treenode*>q;
    if(!head)
        root = NULL;
    
    root = new treenode(head->data);
    q.push(root);
    head=head->next;
    while(q.empty() == false)
    {
        treenode* curr = q.front();
        q.pop();
        if(head==NULL)
            return;
        curr->left=new treenode(head->data);
        q.push(curr->left);
        head=head->next;
        if(head==NULL)
            return ;

        curr->right = new treenode(head->data);
        q.push(curr->right);
        head=head->next;
    }
}
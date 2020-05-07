#include <iostream>
#include <queue>
#include <bits/stdc++.h>
/*
Inorder traversals
    O(n) Time compxiity
    O(h) Space complxity 
*/
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};
node *root = NULL;

/* CREATION OF BINARY TREE USING QUEUE DATA STRUCTUR*/
void create()
{
    node *p, *t;
    int x;
    queue<node *> q;
    cout << "Enter root value: ";
    cin >> x;
    root = new node(x);
    q.push(root);
    while (q.empty() == false)
    {
        p = q.front();
        q.pop();
        cout << "Enter left child of " << p->key << " :";
        cin >> x;
        if (x != -1)
        {
            t = new node(x);
            p->left = t;
            q.push(t);
        }
        cout << "Enter right child " << p->key << " :";
        cin >> x;
        if (x != -1)
        {
            t = new node(x);
            p->right = t;
            q.push(t);
        }
    }
}
/* PRE-ORDER TRAVERSAL 
    time complexity: as we are traversing every node once --> O(n)
    space complexit : recursion stack : O(h) where h is height of tree 
*/
void Preorder(struct node *p)
{
    if (p)
    {
        cout << p->key << " ";
        Preorder(p->left);
        Preorder(p->right);
    }
}
void Inorder(struct node *p)
{
    if (p)
    {
        Inorder(p->left);
        cout << p->key << " ";
        Inorder(p->right);
    }
}
void Postorder(struct node *p)
{
    if (p)
    {
        Postorder(p->left);
        Postorder(p->right);
        cout << p->key << " ";
    }
}
/*  
    LEVEL ORDER TRAVERSAL USING QUEUE 
    TIME COMPLEXITY O(n+h) WHERE n IS EACH NODE TRAVERSAL AND h IS NUMBER OF NULLS AS RECURSION CALL FOR NULL IS ALSO THERE
    SPACE COMPLEXITY O(W) WHERE W IS WIDTH OF BINARY TREE, AND IN COMPLETE BT W ~ N/2
*/
void Levelorder(struct node *p)
{
    queue<node *> q;
    cout << p->key << " ";
    q.push(p);
    while (q.empty() == false)
    {
        p = q.front();
        q.pop();
        if (p->left != NULL)
        {
            cout << p->left->key << " ";
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            cout << p->right->key << " ";
            q.push(p->right);
        }
    }
}
void level_order_gfg(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (q.empty() == false)
    {
        node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}
/*
     printing line by line every level 
    method -1 : using queue DS
    insert null after each level traversal 
*/
void level_order_linebyline(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (q.size() > 1)
    {
        node *curr = q.front();
        q.pop();
        if (curr == NULL)
        {
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}
void level_order_alter(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << endl;
    }
}
/* Count number of nodes in a tree 
    Most of the problems are solved by pre-order traversal techniques
 */
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
/*
Getting maximum value using recursion
*/
int getMax(node *root)
{
    if (root == NULL)
        return INT_MIN;
    else
        return max(root->key, max(getMax(root->left), getMax(root->right)));
}
/*
     GETTING HEIGHT OF NODES
*/
int height(node *root)
{
    if (root == NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;
}

bool isIdentical(node *r1, node *r2)
{
    //Your Code here
    if(r1 == NULL && r2==NULL)
        return true;
    if(r1 == NULL||r2 == NULL)
        return false;
    
    return (r1->key==r2->key && isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right));
}
void print_left_side_view(node *root)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int count = q.size();
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();
            if (i == 0)
                cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        //cout << endl;
    }
}
// Nodes at distance k from the root are basically the nodes at (k+1)th level of the Binary Tree.
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

// Children Sum Property is a property in which the sum of values of the left child and right child should be equal to the value of their node if both children are present. Else if only one child is present then the value of the child should be equal to its node value.
bool ischildrensum(node *root)
{   
    if(root == NULL)return true;
    if(root->left == NULL && root->right == NULL) return true;
    int sum = 0;
    if(root->left != NULL) 
        sum += root->left->key;
    if(root->right != NULL)
        sum += root->right->key;
    return (root->key == sum && ischildrensum(root->left) && ischildrensum(root->right));
}
//In a Balanced Binary Tree for every node, the difference between heights of left subtree and right subtree should not be more than one.
bool isBal(node * root) // O(n^2)
{   
    if(root==NULL) return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh)<=1 && isBal(root->left) && isBal(root->right));
}

bool isBalEfficient(node * root)
{

}
// Maximum Width of Binary tree is the maximum number of nodes present in a level of the Tree.
int maximum_width(node * root)
{
     queue<node *> q;
    q.push(root);
    int res = 0;
    while (!q.empty())
    {
        int count = q.size();
        res = max(res,count);
        for (int i = 0; i < count; i++)
        {
            node *curr = q.front();
            q.pop();
            cout << curr->key << " ";
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
        cout << endl;
    }
}   

int main()
{
    // node *root = new node(10);
    // root->left = new node(20);
    // root->right = new node(30);
    // root->left->left = new node(40);
    while (true)
    {

        int case_;
        cin >> case_;
        switch (case_)
        {
        case 1:
            create();
            break;
        case 2:
            Preorder(root);
            break;
        case 3:
            Postorder(root);
            break;
        case 4:
            Inorder(root);
            break;
        case 5:
            Levelorder(root);
            break;
        case 6:
            level_order_linebyline(root);
            break;
        case 7:
            level_order_gfg(root);
            break;
        case 8:
            level_order_alter(root);
            break;
        case 9:
            getMax(root);
            break;
        case 10:
            count_nodes(root);
        case 11:
            count_nodes_degree_2(root);
            break;
        case 12:
            height(root);
            break;
        case 13:
            exit(0);
        default:
            break;
        }
    }
}
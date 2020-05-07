#include <iostream>
using namespace std;
struct node
{
    int key;
    node *next;

public:
    node(int x)
    {
        key = x;
        next = NULL;
    }
};

node *insertBegin(node* head, int key)
{
    node *temp = new node(key);
    temp->next = head;
    return temp;
}

node *insertAfterEnd(node* head, int key)
{
    node* temp = new node(key);
    if(head==NULL)
    {
        return temp;
    }
    node* curr = head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next = temp;
    return head;
}

void print(node* head)
{   
    //here head is a pointer, we can change the contents of the location permanently but head is local to the function
    node* curr = head;
    while(curr!=NULL)
    {
        cout << curr->key << " ";
        curr = curr->next;
    }
}
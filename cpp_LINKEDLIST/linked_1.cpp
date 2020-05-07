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

class linkedlist
{
private:
public:
    node *head, *tail;
    linkedlist()
    {
        head = NULL;
        tail = NULL;
    }
    node *add_node(int data)
    {
        node *temp = new node(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        return head;
    }
    node *add_begin(int key)
    {
        node *temp = new node(key);
        temp->next = head;
        return temp;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->key << " ";
            temp = temp->next;
        }
    }
    void recursive_display(struct node *temp)
    {
        if (temp != NULL)
        {
            cout << temp->key << " ";
            recursive_display(temp->next);
        }
    }
    void reverse_display(struct node *temp)
    {
        if (temp != NULL)
        {
            recursive_display(temp->next);
            cout << temp->key << " ";
        }
    }
};

int main()
{
    linkedlist l;
    l.head = l.add_node(20);
    l.head = l.add_node(25);
    l.head = l.add_node(19);
    l.head = l.add_node(123);
    l.head = l.add_node(1);
    l.display();
    cout << endl;
    l.recursive_display(l.head);
    cout << endl;
    l.reverse_display(l.head);
}
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;

public:
    node(int x)
    {
        data = x;
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
    void Display()
    {
        struct node *p;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
};

int main()
{
    linkedlist l;
    
    l.head = l.add_node(12342);
    l.head = l.add_node(1213);
    l.head = l.add_node(1245);
    l.head = l.add_node(1452);
    l.head = l.add_node(321);
    l.Display();
}

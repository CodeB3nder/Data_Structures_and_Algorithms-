// Separate chaining using Linked List

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Hash
{
    int bucket_size; //total size of the hash table
    list<int> *table;

public:
    Hash(int);
    void insertItem(int);
    void deleteItem(int);
    int hashFunc(int x)
    {
        return x % bucket_size;
    }
    void displayHash();
};

Hash::Hash(int b)
{
    this->bucket_size = b;
    table = new list<int>[bucket_size];
}
void Hash::insertItem(int key)
{
    int index = hashFunc(key);
    table[index].push_back(key);
}

void Hash::deleteItem(int key)
{
    int index = hashFunc(key);
    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); ++i)
    {
        if (*i == key)
            break;
    }
    if (i != table[index].end())
    {
        table[index].erase(i); //Erase will update all the pointers
    }
    else
        cout << "Key not found" << endl;
}

void Hash::displayHash()
{
    for (int index = 0; index < bucket_size; index++)
    {
        cout << index;
        for (auto itr : table[index])
        {
            cout << "-->" << itr;
        }
        cout << endl;
    }
}

int main()
{
    cout << "Create the size of hash Table: ";
    int n;
    cin >> n;
    Hash h(n);
    bool state = true;
    while (state)
    {
        cout << "1.Insert into table" << endl;
        cout << "2.Delete key from table" << endl;
        cout << "3.Show the table" << endl;

        int case_;
        cin >> case_;

        switch (case_)
        {
        case 1:
            int key_;
            cout << "Enter the key to be inserted: " << endl;
            cin >> key_;
            h.insertItem(key_);
            break;
        case 2:

            cout << "Enter the key to be inserted: " << endl;
            cin >> key_;
            h.deleteItem(key_);
            break;
        case 3:
            cout << endl;
            h.displayHash();
            break;
        case 4:
            state = false;
            break;
        default:
            break;
        }
    }
}
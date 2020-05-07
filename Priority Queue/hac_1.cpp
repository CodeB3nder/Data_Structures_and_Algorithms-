#include <cmath>
#include <cstdio>
#include <functional>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

class MinHeap
{
    int *harr;
    int capacity;
    int heap_size;
public:
    MinHeap(int c)
    {
        heap_size=0;
        capacity=0;
        harr= new int[c];
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
    int right(int i)
    {
        return (2*i+2);
    }
    int left(int i)
    {
        return (2*i-1);
    }
    void MinHeapify(int i);
    int extractMin();
    void decreaseKey(int i, int new_val);
    void deleteKey(int i);
    void insertKey(int k);
    void search_delete(int key);
};
void MinHeap ::insertKey(int k)
{
    if(heap_size == capacity)
        return;
    heap_size++;
    harr[heap_size-1] = k;
    int i = heap_size-1;
    while(i!= 0 && harr[parent(i)] > harr[i])
    {
        swap(harr[parent(i)], harr[i]);
        i = parent(i);
    }
}
int MinHeap ::  extractMin()
{
    // Your code here
    // if(heap_size <=0)
    //     return -1;
    // if(heap_size == 1)  
    // {
    //     heap_size--;
    //     return harr[0];
    // }
    int root = harr[0];
    // harr[0] = harr[heap_size-1];
    // heap_size--;
    // MinHeapify(0);
    return root;    
}
void MinHeap::MinHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int smallest = i;
    if (l < heap_size && harr[l] < harr[i])
        smallest = l;
    if (r < heap_size && harr[r] < harr[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(harr[i], harr[smallest]);
        MinHeapify(smallest);
    }
}
void MinHeap::decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(harr[i], harr[parent(i)]);
       i = parent(i);
    }
}
void MinHeap :: deleteKey(int i)
{
    if(i >= heap_size)
        return;
    decreaseKey(i, INT8_MIN);
    extractMin();
}
void MinHeap::search_delete(int key)
{   
    vector<int> varr(harr, harr+heap_size);
    auto it = find(varr.begin(),varr.end(),key);
    deleteKey(it-varr.begin());
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin >> q;
    MinHeap heap(10000);
    while(q--)
    {
        int query, value;
        cin>>query;
        if(query==1){
            cin >> value;
            heap.insertKey(value);
        }
        else if(query==2)
        {
            cin >> value;
            heap.search_delete(value);        
        }
        else
            cout << heap.extractMin() << endl;
    }
    return 0;
}

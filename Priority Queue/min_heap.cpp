# include<iostream>
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
        harr=new int[c];
    }
    ~MinHeap()
    {
        delete[] harr;
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
};

int MinHeap ::  extractMin()
{
    // Your code here
    if(heap_size <=0)
        return -1;
    if(heap_size == 1)  
    {
        heap_size--;
        return harr[0];
    }
    int root = harr[0];
    harr[0] = harr[heap_size-1];
    heap_size--;
    MinHeapify(0);
    return root;    
}

/* Removes element from position x in the min heap  */
void MinHeap :: deleteKey(int i)
{
    // Your code here
    if(i >= heap_size)
        return;
    decreaseKey(i, INT8_MIN);
    extractMin();
}

/* Inserts an element at position x into the min heap*/
void MinHeap ::insertKey(int k)
{
   // Your code here
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


// Decrease Key operation, helps in deleting key from heap
void MinHeap::decreaseKey(int i, int new_val)
{
    harr[i] = new_val;
    while (i != 0 && harr[parent(i)] > harr[i])
    {
       swap(harr[i], harr[parent(i)]);
       i = parent(i);
    }
}


/* You may call below MinHeapify function in 
   above codes. Please do not delete this code
   if you are not writing your own MinHeapify */
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

int main()
{
    MinHeap heap(5);
}
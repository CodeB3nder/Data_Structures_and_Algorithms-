#include <iostream>
#include "partitioning.cpp"
using namespace std;

class Heap
{
public:
	int *arr;
	int size;
	int capacity;
	Heap(int c)
	{
		arr = new int[c];
		size = 0;
		capacity = c;
	}

	int left(int i) {return (2*i+1);}
	int right(int i) {return (2*i+2);}
	int parent(int i){return (i-1)/2;}
	void insert_maxHeap(int x)
	{
		if(size == capacity)
			return;
		size++;
		arr[size-1] = x;
		int i = size-1;
		while(i!=0 && arr[parent(i)]<arr[i])
		{
			swap(arr[i], arr[parent(i)]);
			i =parent(i);
		}
		// i != 0 means its not root
	}
	void insert_minHeap(int x)
	{
		if(size == capacity)
			return;
		size++;
		arr[size-1] = x;
		int i = size-1;
		while(i!=0 && arr[parent(i)]>arr[i])
		{
			swap(arr[i], arr[parent(i)]);
			i =parent(i);
		}
		// i != 0 means its not root
	}
	// It will take index where the heap property is violated
	void minHeapify(int i)
	{	
		int l = left(i);
		int r = right(i);
		int smallest;
		if(l < size && arr[l] < arr[i])
		{
			smallest  = l;
		}
		else 
		{
			smallest = i;
		}
		if(r < size && arr[r] < arr[smallest])
		{
			smallest = r;
		}
		// If smallest is the index itself then, no need to change anything
		// If smallest is one of the children then swap
		if(smallest!=i) 
		{
			swap(arr[i], arr[smallest]);
			minHeapify(smallest);
		}
	}	

	void maxHeapify(int i)
	{
		int l = left(i);
		int r = right(i);
		int largest=i;
		// Find out the largest of the three elements (parent and two childrens)
		if(l < size && arr[l] > arr[i])
			largest  = l;
		else 
			largest = i;
		if(r < size && arr[r] > arr[largest])
			largest = r;
		// If smallest is the index itself then, no need to change anything
		// If smallest is one of the children then swap
		if(largest!=i) 
		{
			swap(arr[i], arr[largest]);
			maxHeapify(largest);
		}
	}

	int extract_min() // Theta(1) + Big Oh(logn)
	{
		if(size==0)
			return INT8_MAX;
		if(size==1)
		{
			size--;
			return arr[0];
		}
		swap(arr[0], arr[size-1]);
		size--;
		minHeapify(0);
		return arr[size];
	}

	int extract_max() // Theta(1) + Big Oh(logn)
	{
		if(size==0)
			return INT8_MAX;
		if(size==1)
		{
			size--;
			return arr[0];
		}
		swap(arr[0], arr[size-1]);
		size--;
		maxHeapify(0);
		return arr[size];
	}

	// Inserts x into i th index and corrects the heap property by swapping the same with its parent
	void decrease_key(int i, int x) // O(log n)
	{
		arr[i] = x;
		while(i!=0 && arr[parent(i) > arr[i]])
		{
			swap(arr[i], arr[parent(i)]);
			i = parent(i);
		}
	} // Min Heap

	void delete_key(int i)
	{
		decrease_key(i, INT8_MIN);
		extract_min();
	}
	
};
int main()
{
	Heap heap(10);
	heap.insert_minHeap(30);
	heap.insert_minHeap(25);
	heap.insert_minHeap(20);
	heap.insert_minHeap(35);
	heap.insert_minHeap(40);
	heap.insert_minHeap(80);
	heap.insert_minHeap(32);
	heap.insert_minHeap(100);
	heap.insert_minHeap(70);
	display(heap.arr, heap.size);	
	//cout << heap.extract_min() << endl;
	//heap.minHeapify(0);
	heap.delete_key(3);
	display(heap.arr, heap.size);
	// heap.maxHeapify(0);
	// display(heap.arr, heap.size);
	return 0;
}


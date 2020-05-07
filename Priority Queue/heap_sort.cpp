void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// The functions should be written in a way that array become sorted 
// in increasing order when above heapSort() is called.
// To heapify a subtree rooted with node i which is  an index in arr[]. 
// n is size of heap. This function  is used in above heapSor()
void heapify(int harr[], int n, int i)  {
      // Your Code Here
       int l = 2*i+1;
    int r = 2*i+2;
    int largest = i;
    if (l < n && harr[l] > harr[i])
        largest = l;
    if (r < n && harr[r] > harr[largest])
        largest = r;
    if (largest != i)
    {
        swap(harr[i], harr[largest]);
        heapify(harr,n,largest);
    }
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    // Your Code Here

    for(int i=n/2-1; i>=0; --i){
        heapify(arr, n, i);
    }
}

void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

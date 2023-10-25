class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
        int root = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left < n && arr[left] > arr[root])
            root = left;
            
        if(right < n && arr[right] > arr[root])
            root = right;
        
        if(root != i) {
            swap(arr[i], arr[root]);
            heapify(arr, n, root);
        }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
        for(int i = n/2-1; i>=0;i--) {
            heapify(arr, n, i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr, n);
        for(int i = n-1; i>0; i--) {
            swap(arr[0], arr[i]);
            heapify(arr, i,0);
        }
    }
};

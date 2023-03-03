# Sorting
  ## Quick sort
    
    /* low  --> Starting index,  high  --> Ending index */
    quickSort(arr[], low, high)
    {
        if (low < high)
        {
            /* pi is partitioning index, arr[pi] is now
               at right place */
            pi = partition(arr, low, high);

            quickSort(arr, low, pi - 1);  // Before pi
            quickSort(arr, pi + 1, high); // After pi
        }
    }
cpp

  ## Insertion Sort
  
      this algorithm comaparison based algorithm. here is gurantee that is largest index should have largest value.
      void insert(int arr[], int n)
    {
        //code here
        int maxVal = arr[n-1],maxInd = n-1;
        for(int k = 0; k <=n-1; k++) {
            if(maxVal < arr[k]) {
                maxVal = arr[k];
                maxInd = k;
            }
        }
        //swap
        int temp = arr[n-1];
        arr[n-1] = maxVal;
        arr[maxInd] = temp;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        if(n==0)
            return;
            
        insert(arr, n);
        insertionSort(arr, n-1);
    }
 cpp



## External Sorting
External sorting is a term for a class of sorting algorithms that can handle massive amounts of data. External sorting is required when the data being sorted does not fit into the main memory of a computing device (usually RAM) and instead, must reside in the slower external memory (usually a hard drive).

### When to use External Sorting
When the unsorted data is too large to perform sorting in computer internal memory then we use external sorting.
In external sorting we use the secondary device. in a secondary storage device, we use the tape disk array. 
when data is large like in merge sort and quick sort.
Quick Sort: best average runtime.
Merge Sort: Best Worse case time.
To perform sort-merge, join operation on data.
To perform order by the query.
To select duplicate element.
Where we need to take large input from the user.

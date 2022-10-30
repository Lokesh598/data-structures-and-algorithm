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
```
  
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
 ```cpp

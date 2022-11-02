class Solution{
  public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        
        if(low<high) {
            int m = partition(arr, low, high);
            quickSort(arr, low, m-1);
            quickSort(arr, m+1, high);
        }
    }
    
    public:
    int partition (int arr[], int p, int q)
    {
       // Your code here
       int i = p;
       int pivot = arr[p];
       
       for(int j = p+1; j<=q; j++) {
           if(arr[j] <= pivot) {
               i++;
               swap(arr[i], arr[j]);
           }
       }
       swap(arr[i], arr[p]);
       return i;
    }
};

public:
    int partition(int arr[], int p, int q) {
        int i = p;
        int pivot = arr[p];
        
        for(int j = i+1; j<=q; j++) {
            if(pivot >= arr[j]) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i], arr[p]);
        return i;
    } 
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        
        int l = 0, r = n-1;
        
        while (l<=r) {
            int m = partition(arr, l, r);
            
            if(m == k-1) {
                return arr[k-1];
            }
            else if (m > k-1) {
                r = m-1;
            }
            else 
                l = m+1;
        }
        return -1;
    }

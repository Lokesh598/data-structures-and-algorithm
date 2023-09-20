class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        
        int low = 0;
        int high = n-1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (arr[mid] == k) 
                return mid;
                
            if ( arr[mid] > k)
                high = mid-1;
            else 
                low = mid + 1;
        }
        
        return -1;
    }
};

//Function to merge the arrays.
        void merge(long long a[], long long b[], int m, int n) 
        { 
            // code here 
            int i = 0, j = 0;
            int left = m-1;
            int right = 0;
            while (left >= 0 && right < n) {
                if(a[left] > b[right]) {
                    swap(a[left--], b[right++]);
                }
                else {
                    break;
                }
            }
            
            sort(a, a + m);
            sort(b, b + n);
        } 

TC = O(min(m,n) + O(nlogn) + O(mlogm)
SC = O(1)

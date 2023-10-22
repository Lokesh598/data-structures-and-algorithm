Input: 
N = 4, arr1[] = {1, 2, 3, 4}  
M = 5, arr2 [] = {2, 4, 6, 7, 8}
Output: 2 4
Explanation: 2 and 4 are only common 
elements in both the arrays.

approach: same as merge algo of merge sort algorithm
  
vector<int> printIntersection(int a[], int b[], int m, int n) 
    { 
        //Your code here
        vector<int> res; 
        int i = 0, j = 0;
        while(m>i&&n>j) {
            if (a[i] < b[j]) {
                i++;
            } else if (a[i] > b[j]) {
                j++;
            } else { 
                if(res.size() == 0) {
                    res.push_back(a[i]);
                }
                if (res.size() > 0 && res.back()!=a[i])
                res.push_back(a[i]);
                i++; j++;
            }
        }
        
        if(res.size() == 0) res.push_back(-1);
        return res;
    }

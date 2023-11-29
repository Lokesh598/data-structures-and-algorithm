1. linear search or brute force solution

```
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //linear search
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if(matrix[i][j] == target) {
                    return true;
                }
            }
        }
        return false;
    }
```
2. 
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //linear search
        int m = matrix.size();
        int n = matrix[0].size();
        
        int first = 0, last = n - 1;
        while ( first < m && last >= 0) {
            if (matrix[first][last] == target) return true;

            else if (matrix[first][last] > target) last--;
                
            else first++;
        }
        return false;
 }

3. efficient, using binary search 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
		// if matrix have 0 rows or 0 colums
        if(n == 0 || m == 0)
            return false;
        
		// treating matrix as array just taking care of endices
		// [0..n*m]
        int start = 0, end = m*n - 1;
        
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
			// a[x] : matrix[x / m][x % m] formulae
            int ind = matrix[mid/m][mid%m];
            if (target == ind)
                return true;
			// left half
            else if(target < ind)
                end = mid - 1;
            else
			// right half
                start = mid + 1;       
        }
        return false;
   
    }
};

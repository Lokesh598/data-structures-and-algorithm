class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        if(row == 0 || col == 0)
            return false;

        int low = 0, high = col-1;

        // for (int i = 0; i < row; i++) {
        //     while (low <= high) {
        //         int mid = low + (high-low)/2;
        //         if (matrix[i][mid] == target) return true;

        //         else if (matrix[i][mid] > target) low = mid + 1;
        //         else high = mid - 1;
        //     }
        // }
        while (low < row && high > -1) {
            int res = matrix[low][high];
            if (res == target) return true;
            else if (res < target) low++;
            else high--;
        }
        return false;
    }
};

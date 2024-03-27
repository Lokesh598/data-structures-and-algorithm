class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if (k <= 1) return 0;

        int result = 0, prod = 1;
        int left = 0, right = 0;
    
        while (right < nums.size()) {
            prod *= nums[right];

            while (prod>=k) {
                prod /= nums[left];
                left++;
            }
            result += right - left + 1;
            right++;
        }
        return result;
    }
};

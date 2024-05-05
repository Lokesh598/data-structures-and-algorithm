class Solution {
    public int longestSubarray(int[] nums) {
        // num of 0 in window can at most 1
        int i = 0, j = 0, cnt = 0, N = nums.length;

        for (; j < N; j++) {
            if (nums[j] == 0) cnt++;
            // cnt += nums[j];
            if (cnt > 1) {
                if (nums[i++] == 0) cnt--;
                // res = Math.max(res, (j - i));
            }
        }                                        
        return j-i-1;       
    }
}

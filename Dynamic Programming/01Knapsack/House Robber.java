leetcode problem 198
  
class Solution {
    static int[] dp;
    public int rob(int[] nums) {
        dp = new int[nums.length];
        for (int i = 0; i < dp.length; i++) {
            dp[i] = -1;
        }
        return robHelper(nums, nums.length-1);
    }

    private static int robHelper(int[] nums, int n) {
        if (n < 0) return 0;
        if (dp[n] != -1) return dp[n];
        dp[n] = Math.max(robHelper(nums, n-2) + nums[n], robHelper(nums, n-1));

        return dp[n];
    }
}

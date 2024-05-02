class Solution {
    public int findMaxK(int[] nums) {
    
        Arrays.sort(nums);
        int l = 0, r = nums.length-1;
        while (l < r) {
            if (nums[l] + nums[r] == 0) {
                return nums[r];
            } else if (nums[l] + nums[r] < 0) {
                l++;
            } else {
                r--;
            }
        }
        return -1;
    }
}

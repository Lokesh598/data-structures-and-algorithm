class Solution {
    public boolean toTheLeft(int idx, int[] nums) {
        if (idx == nums.length-1) return true;
        if (idx % 2 != 0) return nums[idx] != nums[idx-1];
        else return nums[idx] != nums[idx+1];
    }
    public int singleNonDuplicate(int[] nums) {
        
        int l = 0, r = nums.length - 1, ans = 0;
        while (l <= r) {

            int mid = l + (r-l)/2;
            if (toTheLeft(mid, nums)) {
                ans = mid;
                r = mid-1;
            } else {
                l = mid+1;
            }
        }
        return nums[ans];
    }
}

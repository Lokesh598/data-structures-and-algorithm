class Solution {
    public int singleNumber(int[] nums) {
        Map<Integer, Integer> mp = new HashMap<>();
        int res = 0;
        for (int num:nums) {
            res ^= num; 
        }
        return res;
    }
}

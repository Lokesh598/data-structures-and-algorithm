class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        Map<Integer, Integer> mp = new HashMap<>();
        int[] res = new int[2];
        for (int i = 0; i < nums.length; i++) {
            if (mp.containsKey(nums[i])) {
                int index = mp.get(nums[i]);
                res[0] = index;
                res[1] = i;
            } else {
                mp.put(target-nums[i], i);
            }
        }
        return res;
    }
}


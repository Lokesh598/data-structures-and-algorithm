class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        List<List<Integer>> triplets = new ArrayList<>();
        Arrays.sort(nums);

        for (int i = 0; i < n-2; i++) {
            int start = i+1;
            int end = n-1;

            while (start < end) {
                int sum = nums[i] + nums[start] + nums[end];

                if (sum == 0) {
                    triplets.add(Arrays.asList(nums[i], nums[start], nums[end]));
                    start++;
                    end--;
                    while (start < n && nums[start] == nums[start-1]) start++;
                    while (end > i && nums[end] == nums[end+1]) end--;
                } else if (sum > 0) {
                    end--;
                } else {
                    start++;
                }
            }
            while (i < n-1 && nums[i] == nums[i+1]) i++;
        }
        return triplets;
    }
}

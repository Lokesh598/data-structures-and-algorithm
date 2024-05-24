class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int[] res = new int[nums.length];

        int pointer = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < pivot) {
                res[pointer++] = nums[i];
            }
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == pivot) {
                res[pointer++] = nums[i];
            }
        }
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] > pivot) {
                res[pointer++] = nums[i];
            }
        }

        return res;
    }
}

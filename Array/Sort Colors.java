// Sort Colors

class Solution {
    public static void swap(int x, int y) {
        int tmp = x;
        x = y;
        y = tmp;
    }
    public void sortColors(int[] nums) {
        // Arrays.sort(nums);
        int f = 0, s = nums.length-1, k = 0;
        int tmp;
        while (k<=s) {
            if (nums[k] == 0) {
                tmp = nums[f];
                nums[f] = nums[k];
                nums[k] = tmp;
                f++; k++;
            } else if (nums[k] == 2) {
                tmp = nums[s];
                nums[s] = nums[k];
                nums[k] = tmp;
                s--;
            } else {
                k++;
            }
        }
    }
}


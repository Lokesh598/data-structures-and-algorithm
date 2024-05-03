class Solution {
    public void reverse(int[] subA, int l, int r) {
        // int l = 0, r = subA.length-1;
        while (l<r) {
            int tmp = subA[l];
            subA[l++] = subA[r];
            subA[r--] = tmp;
        }
    }
    public void rotate(int[] nums, int k) {
        k = k%nums.length;
        reverse(nums, 0, nums.length-k-1);
        reverse(nums, nums.length-k, nums.length-1);
        reverse(nums, 0, nums.length-1);
    }
}
